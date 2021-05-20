
/*
 * Cervantes Alatorre Juan José Emiliano
 * 18300645
 * 6B1
 * Sistemas Embebidos
 * 14/05/2021
 */
int Led = 13;
int LM= A0;

float calculo(float x){
  float mV= (x/255)*5000;
  float grados = mV/10;
  Serial.println("Milivots**** ");
  Serial.print(mV);
  Serial.println(" ");
  Serial.println("Grados*** ");
  Serial.print(grados);
  Serial.println(" "); 
  float valor2 = analogRead(0)/4;
  Serial.println("Bits sobre 255");
  Serial.print(valor2);
  return valor2;
}



void setup() { 
 Serial.begin(9600);
 pinMode(Led, OUTPUT); 
}
void loop() {
   
   //Con este convierto a 255 bits
   float valor = analogRead(0)/4;
   Serial.print(valor);
   Serial.println(" ");
   
   while(valor >= 0 && valor <= 7.0){
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(800);
    digitalWrite(Led,LOW);
    delay(800);
   }
   
   while(valor >=7.1 && valor <=14.0){
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(500);
    digitalWrite(Led,LOW);
    delay(500);
   }
   
   while(valor >=14.1  && valor <=21.0){ 
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(300);
    digitalWrite(Led,LOW);
    delay(300);
   }
   
   while(valor >=21.1 && valor <=28.0){
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(200);
    digitalWrite(Led,LOW);
    delay(200);
   }
   
   while(valor >= 28.1 && valor<=35.0){
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(100);
    digitalWrite(Led,LOW);
    delay(100);
   }

   while(valor >= 35.1){
    float valorNuevo = calculo(valor);
    valor = valorNuevo;
    digitalWrite(Led,HIGH);
    delay(50);
    digitalWrite(Led,LOW);
    delay(50);
   }
 delay(200);
}
