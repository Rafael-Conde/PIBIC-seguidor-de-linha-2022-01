//programa de ascender o LED
//ACENDER(2)
//esperar (10)
//apagar(2)
//esperar (10)
//"tipo" "nome""{valor}" - bool, char,int,double
int nome{10};
double variavel_real{10.1};
int pino_led;
char mensagem_de_falha[]{"O programa não foi concluido!"};
char caractere_unico{'t'};
char caractere_unico2{'a'};
bool verdadeiro_ou_falso{false};
//funções

//programa de ler o sensor infravermelho
//função LER()




//"tipo" "nome""{valor}"
//"tipo" "nome""(parametros)"
int soma(int v1, int v2)
{
  return v1 + v2;
}
int pegar_numero()
{
  return 6;
}



void setup()
{
  int resultado = soma(8,2);
  pinMode(pino_led,OUTPUT);
  Serial.begin(9600);
  Serial.println(pegar_numero());
  Serial.println(resultado);
  Serial.println(soma(2,8));
}



void loop()
{
  //ACENDER(2)
  //digitalWrite(pino_led,HIGH)
  //esperar (10)
  //delay(200);
  //apagar(2)
  //digitalWrite(pino_led,LOW);
  //esperar (10)
  //delay(975);
  
}
