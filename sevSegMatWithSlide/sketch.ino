#define ROW 10
#define COL 7

const int mapNumbers[ROW][COL] = {
  // A  B  C  D  E  F  G
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};

void setup() {
  // put your setup code here, to run once:

  for (int i = 7; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
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


void loop() {

  int signal = analogRead(A0);
  int signal1 = analogRead(A1);
  int signal2 = analogRead(A2);
  int signal3 = analogRead(A3);

  int mapSig = map(signal, 0, 1023, 0, 9);
  int mapSig1 = map(signal1, 0, 1023, 0, 255);
  int mapSig2 = map(signal2, 0, 1023, 0, 255);
  int mapSig3 = map(signal3, 0, 1023, 0, 255);


  analogWrite(6,mapSig1);
  analogWrite(5,mapSig2);
  analogWrite(3,mapSig3);

 for (int i = 7; i < 14; i++) {
    digitalWrite(i, mapNumbers[mapSig][i - 7]);
  }



}
