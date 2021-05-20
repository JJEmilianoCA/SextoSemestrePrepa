//Cervantes Alatorre Juan José Emiliano 18300645 Marzo 11 2021
//Sistemas Embebidos 1

//Declaramos los led para las entradas
int led1= 12;
int led2= 11;
int led3 = 10;
void setup() {
  // put your setup code here, to run once:
  //Declaramos como vana  ir los pines, en este caso SALIDA
  pinMode(led1 ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led3 ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Configuro para que el led como es salida, se mantenga en HIG 2000 milisegundos
  digitalWrite(led1 ,HIGH);
  digitalWrite(led2 ,HIGH);
  digitalWrite(led3 ,HIGH);
  delay(50);
  //Apago el Led 1000 milisegundos
  digitalWrite(led1 ,LOW);
  digitalWrite(led2 ,LOW);
  digitalWrite(led3 ,LOW);
  delay(50);
}
