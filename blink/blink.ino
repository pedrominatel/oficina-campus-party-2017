void setup(void) {
  //Configura o pino digital para saida/output
  pinMode(D7, OUTPUT);
  digitalWrite(D7, LOW);
}

void loop(void) {
  //envia o comando de escrita no pino digital
  digitalWrite(D7, HIGH);
  //funcao de pausa/delay em mili-segundos
  delay(1000);
  digitalWrite(D7, LOW);
  delay(1000);
}

