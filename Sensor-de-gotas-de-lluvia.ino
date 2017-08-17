/*
  Created by TEOS

  Domotic with Arduino https://goo.gl/btZpjs

  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB http://bit.ly/1UvumG9
*/

const int sensorPinT = A0;

int valT;
int finalvalT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valT = map(analogRead(sensorPinT), 0, 1023, 95, 0);
  finalvalT = constrain (valT, 0, 95);
  Serial.print("Hay un ");
  Serial.print(finalvalT);
  Serial.println("% de gotas de agua");
  delay(100);
}
