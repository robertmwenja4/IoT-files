//Define pins numbers
const int trigg = 4;
const int echo = 3;
int ledpin = 13;



long duration;//Define variables
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigg, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);//starts the serial communication

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigg, LOW);
  delayMicroseconds(2);//After 2us it turns high
  digitalWrite(trigg,HIGH);
  delayMicroseconds(10);//sends waves for 10us and goes low
  digitalWrite(trigg, LOW);

  duration = pulseIn(echo, HIGH);//the function reads time
  distance = duration*0.034 / 2;

  Serial.print("The Distance is: ");
  Serial.println(distance);
  digitalWrite(ledpin, LOW)
  if (distance > 50){
    digitalWrite(ledpin, HIGH);
  }else{
    digitalWrite(ledpin, LOW);
  }
 
}
