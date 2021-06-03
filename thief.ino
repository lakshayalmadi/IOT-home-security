int pir=7;

void setup(){
  Serial.begin(9600);
  pinMode(pir, INPUT);
}

void loop(){
  if(digitalRead(pir)==1){
    Serial.println("23");
    delay(3000);
  }
}
