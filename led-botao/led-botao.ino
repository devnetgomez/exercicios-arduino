
const int LED = 13;
const int BOTAO = 7;
int valor = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);

}

void loop() {

  valor = digitalRead(BOTAO);

  Serial.write(valor);
  
  if(valor == HIGH){
    digitalWrite(LED,LOW);
    delay(300);
  }else{
    digitalWrite(LED, HIGH);

   delay(100);
  }

}
