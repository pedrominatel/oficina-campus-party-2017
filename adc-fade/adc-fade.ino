int valor_ldr = 0;

void setup(void){
  //Configura a serial/uart0 para 115200bps
  Serial.begin(115200);
  pinMode(D7, OUTPUT);
}

void read_ldr(void){
  //Le o valor do pino analogico A0
  valor_ldr = analogRead(A0);
  //Imprime o resultado na serial
  Serial.print("Valor LDR: ");
  Serial.println(valor_ldr);
  analogWrite(D7, valor_ldr );

}

void loop(void){
    read_ldr();
}

