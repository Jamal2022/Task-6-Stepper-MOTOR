// Varbile of Motor 1
int DIR1 = 2;
int PUL1 = 3;

// Varbile of Motor 2
int DIR2 = 5;
int PUL2 = 6;

// Varbile of Motor 3
int DIR3 = 10;
int PUL3 = 11;

void setup() {
  pinMode (PUL1, OUTPUT);
  pinMode (DIR1, OUTPUT);
  pinMode (PUL2, OUTPUT);
  pinMode (DIR2, OUTPUT);
  pinMode (PUL3, OUTPUT);
  pinMode (DIR3, OUTPUT);
}

void loop() {
  digitalWrite(DIR1,HIGH);
  digitalWrite(PUL1,LOW);
  delay(5000);
  digitalWrite(PUL1,HIGH);
  
  digitalWrite(DIR2,HIGH);
  digitalWrite(PUL2,LOW);
  delay(5000);
  digitalWrite(PUL2,HIGH);
  
  digitalWrite(DIR3,HIGH);
  digitalWrite(PUL3,LOW);
  delay(5000);
  digitalWrite(PUL3,HIGH);
}
