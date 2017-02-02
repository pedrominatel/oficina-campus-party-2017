int botao_status = 0;

void setup (void){

  //configura o botao como entrada/input
  pinMode(D4, INPUT);
  //configura o led como saida/output
  pinMode(D3, OUTPUT);

}

void loop(void){

  //le o status do botao e inverte o status (pullup)
  botao_status = digitalRead(D4);
  //encreve na saida digital o resultado da leitura do botao
  digitalWrite(D3,botao_status);

}

