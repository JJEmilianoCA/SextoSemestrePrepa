int Led = 13;
int LM= A0;
void setup() { 
 Serial.begin(9600);
 pinMode(Led, OUTPUT); 
}
void loop() {

//Con este convierto a 255 bits
  int valor = analogRead(LM)/4;
   
Serial.print(valor);
Serial.println(" ");

 digitalWrite(Led, HIGH); 
 delay(valor); 
 digitalWrite(Led, LOW); 
 delay(valor); 
} 
