const int sensorPinT = A0;

int valT;
int finalvalT;

void setup(){
  Serial.begin(9600);
}

void loop(){
  valT = map(analogRead(sensorPinT), 0, 1023, 95, 0);
  finalvalT = constrain (valT, 0, 95);
  Serial.print("Hay un ");
  Serial.print(finalvalT);
  Serial.println("% de gotas de agua"); 
  delay(100);
}


