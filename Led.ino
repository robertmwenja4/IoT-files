
int ledpin = 13;
//#define led 10

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  Serial.println("Led ON!!");
  delay(1000);
  digitalWrite(ledpin, LOW);
  Serial.println("Led OFF!!");
  delay(1000);

}
