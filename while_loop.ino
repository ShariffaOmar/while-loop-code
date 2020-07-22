int RED = 3;
int BLUE =4;
int GREEN = 5;

void setup() {
  // put your setup code here, to run once:
pinMode (RED, OUTPUT);
pinMode(BLUE, OUTPUT);
pinMode(GREEN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i=1;
while (i<=5){
  digitalWrite(RED,HIGH);
  delay(1000);
  digitalWrite(RED,LOW);
  delay(1000);
  i++;



int j=1;
while(j<=6){
  digitalWrite(BLUE, HIGH);
  delay (1000);
  digitalWrite(BLUE,LOW);
  delay(1000);
  j++;

int i=1;
while(i<=4){
digitalWrite(GREEN, HIGH);
delay(1000);
digitalWrite(GREEN, LOW);
delay(1000);
i++;
}
}
}
}
