int luzVermelha = 13;
int luzAmarela = 12;
int luzVerde = 11;

void setup() {
  pinMode(luzVermelha, OUTPUT);
  pinMode(luzAmarela, OUTPUT);
  pinMode(luzVerde, OUTPUT);
}

void loop() {
  digitalWrite(luzVerde,1);
  digitalWrite(luzAmarela,0);
  digitalWrite(luzVermelha,0); 
  delay(4000);
  digitalWrite(luzVerde,0);
  digitalWrite(luzVermelha,0);
  digitalWrite(luzAmarela,1);
  delay(4000);
  digitalWrite(luzAmarela,0);
  digitalWrite(luzVerde,0);
  digitalWrite(luzVermelha,1);
  delay(4000);
  digitalWrite(luzVermelha,0);
  digitalWrite(luzAmarela,0);
  digitalWrite(luzVerde,0);
  delay(1000);
}
