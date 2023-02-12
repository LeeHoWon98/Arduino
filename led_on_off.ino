void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int readVal = digitalRead(7);
  
  if(readVal == HIGH){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
}
