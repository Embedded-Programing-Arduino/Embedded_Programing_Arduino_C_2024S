





void setup() {
  // put your setup code here, to run once:

  for (int i = 7; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}
void number(int num) {

  int matNumber[10][9] = {
  //       A  B  C  D  E  F  G
  /* 0*/  {1, 1, 1, 1, 1, 1, 0},
  /* 1*/  {0, 1, 1, 0, 0, 0, 0},
  /* 2*/  {1, 1, 0, 1, 1, 0, 1},
  /* 3*/  {1, 1, 1, 1, 0, 0, 1},
  /* 4*/  {0, 1, 1, 0, 0, 1, 1},
  /* 5*/  {1, 0, 1, 1, 0, 1, 1},
  /* 6*/  {1, 0, 1, 1, 1, 1, 1},
  /* 7*/  {1, 1, 1, 0, 0, 0, 0},
  /* 8*/  {1, 1, 1, 1, 1, 1, 1},
  /* 9*/  {1, 1, 1, 0, 0, 1, 1},
};

  

  for (int i = 7; i < 14; i++) {
    digitalWrite(i, matNumber[num][i - 7]);
  }


}
void zero(int mode) {

  for (int i = 7; i < 13; i++) {
    digitalWrite(i, mode);
  }

}
void one(int mode) {
  digitalWrite(8, mode);
  digitalWrite(9, mode);

}


void loop() {

  // for (int i = 7; i < 14; i++) {
  //   digitalWrite(i, HIGH);
  // }
  // delay(500);

  // for (int i = 7; i < 14; i++) {
  //   digitalWrite(i, LOW);
  // }
  // delay(500);
  // one(LOW);
  // delay(500);
  // one(HIGH);
  // delay(500);

   for (int i = 0; i < 10; i++) {
    number(i);
    delay(1500);
  }

}
