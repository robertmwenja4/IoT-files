float sinVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
   pinMode(8, OUTPUT);//define pin status either input or output
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 0; x<180; x++){
    sinVal = (sin(x*(3.1412/180)));

    toneVal = 2000+(int(sinVal*1000));

    tone(8, toneVal);
    delay(2);
  }
}
