void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
double pot1 = 0;
double Van;
double IL, A, B;
void loop() 
{
  
  pot1 = analogRead(A0);
  Van= (pot1*5)/1023;
  B = (5/Van)-1;
  A = pow(B,(-1.165501166));
  IL= (443.6100872)*(A);
  if(IL<2000)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  Serial.print("Voltaje Analogico:  ");
  Serial.print(Van);
  Serial.println(" V");
  Serial.println(" ");
  Serial.print("Numero Analogico:  ");
  Serial.println(pot1);
  Serial.println(" ");
  Serial.print("Intensidad Luminosa:  ");
  Serial.print(IL);
  Serial.println(" lux");
  Serial.println(" ");
  
  delay(1000);
   //Imprimir con salto de linea
}
