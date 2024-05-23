int btn = 7;
int estado = 0;
int led = 13;

void setup() {
pinMode(7, INPUT);
pinMode(13, OUTPUT);
digitalWrite(btn, HIGH);
Serial.begin(9600);
}

void loop() {
  estado = digitalRead(btn);
  if (estado == HIGH){
    digitalWrite (led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
    Serial.println("O exame de sangue é um procedimento médico importante que ajuda os médicos a entenderem como está a saúde do seu corpo. Quando uma criança precisa fazer um exame de sangue, pode parecer assustador no início, mas não precisa se preocupar, porque é bastante simples. Primeiro, um enfermeiro ou técnico médico vai limpar com cuidado o braço da criança e depois colocar uma agulha muito fina em uma veia para tirar uma pequena quantidade de sangue. \n Pode doer um pouquinho, mas geralmente é rápido! O sangue retirado é colocado em pequenos frascos e enviado para o laboratório, onde os cientistas vão analisá-lo para ver se está tudo bem. Eles podem verificar coisas como glóbulos vermelhos, glóbulos brancos e até mesmo o nível de açúcar no sangue. Depois que o exame estiver pronto, o médico vai explicar os resultados aos pais e dizer se está tudo bem ou se algo precisa ser corrigido. É importante lembrar que os exames de sangue ajudam os médicos a garantir que as crianças estejam saudáveis e felizes!");
    delay(1000);
  }
}
