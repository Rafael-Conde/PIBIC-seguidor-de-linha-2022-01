enum motor_esquerdo
{
    frente = A0,
    parado = 1
};

enum motor_direito
{
    frente_d = A2,
    parado_d = 1
};

enum sensor
{
    esquerdo = 6,
    centro = 5,
    direito = 7
};

void setup()
{
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
    pinMode(7, INPUT);
    pinMode(6, INPUT);
    pinMode(5, INPUT);

    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    Serial.begin(115200);
    digitalWrite(motor_esquerdo::frente, HIGH);
    delay(1000);
    digitalWrite(motor_esquerdo::frente, LOW);
}

int leitura_esquerdo{0};
int leitura_centro{0};
int leitura_direito{0};

void loop()
{
    leitura_esquerdo = digitalRead(sensor::esquerdo);
    //leitura_centro = digitalRead(sensor::centro);
    leitura_direito = digitalRead(sensor::direito);
    Serial.print("Esquerdo: \t");
    Serial.print(leitura_esquerdo);
    Serial.print("direito: \t | ");
    Serial.println(leitura_direito);
    if ((leitura_esquerdo == 1) && (leitura_direito == 1))
    {
        analogWrite(motor_direito::frente_d, 150);
        analogWrite(motor_esquerdo::frente, 150);
    }

    if ((leitura_esquerdo == 0) && (leitura_direito == 1))
    {
        analogWrite(motor_esquerdo::frente, 0);
        analogWrite(motor_direito::frente_d, 1000);
    }

    if ((leitura_esquerdo == 1) && (leitura_direito == 0))
    {
        analogWrite(motor_esquerdo::frente, 1000);
        analogWrite(motor_direito::frente_d, 0);
    }
}
