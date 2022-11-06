uint8_t ledverde=5, ledamarelo=6, ledvermelho=7, ledVerde=8, ledAmarelo=9, ledVermelho=10;
void setup() {
  // put your setup code here, to run once:
  for(uint8_t i=5; i<11; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void viaPrimaria(){
  delay(550);
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledVermelho,HIGH);
  digitalWrite(ledamarelo,LOW);
  digitalWrite(ledvermelho,LOW);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarelo,LOW);
  delay(3500);
  
  digitalWrite(ledverde,LOW);  
  digitalWrite(ledamarelo,HIGH);
  digitalWrite(ledVermelho,HIGH);
  digitalWrite(ledvermelho,LOW);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarelo,LOW);
  delay(3500);
  
  digitalWrite(ledverde,LOW);  
  digitalWrite(ledamarelo,LOW);
  digitalWrite(ledvermelho,HIGH);
  delay(550);
}

void viaSecundaria(){
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAmarelo,LOW);
  digitalWrite(ledVermelho,LOW);
  delay(3500);

  digitalWrite(ledverde,LOW);  
  digitalWrite(ledamarelo,LOW);
  digitalWrite(ledvermelho,HIGH);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarelo,HIGH);
  digitalWrite(ledVermelho,LOW);
  delay(3500);
}

void loop() {
  //Aqui é feita a chamada das duas funções para rodar durante o loop
  viaPrimaria();
  viaSecundaria();
}
