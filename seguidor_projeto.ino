//DigitalWrite(pino,valor);
//DigitalRead(pino);
//analogWrite(pino,valor);
//analogRead(pino);
//pinMode(pino,modo); modo = OUTPUT ou INPUT

//programa de ascender o LED
//ACENDER(2)
//esperar (10)(delay(milli_segundos))
//apagar(2)
//esperar (10)

void ACENDER(int pino, int segundos)
{
  digitalWrite(pino,HIGH);
  delay(segundos*1000);
}
void APAGAR(int pino, int segundos)
{
  digitalWrite(pino,LOW);
  delay(segundos*1000);
}
//exercicio
//DigitalWrite(pino,valor(HIGH ou LOW));
//delay(mili_segundos);
//pinMode(pino,OUTPUT ou INPUT);
void setup()
{pinMode (5, OUTPUT);
   Serial.begin(9600);
   
}

void loop()
{
  ACENDER (5, 10);
  APAGAR (5, 10);
 // delay(1000);
}
