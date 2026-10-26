// Carrinho 2WD com L298N + sensor ultrassônico HC-SR04
// Anda para frente; ao detectar obstáculo, recua e desvia.

// Motor A
const int IN1 = 6;
const int IN2 = 7;
// Motor B
const int IN3 = 10;
const int IN4 = 11;
// Sensor ultrassônico
const int TRIG = 12;
const int ECHO = 13;

const int DIST_MIN = 20;    // cm: abaixo disso, considera obstáculo
const int TEMPO_RE = 400;   // ms de ré
const int TEMPO_GIRO = 500; // ms de giro (ajuste para ~90°)

bool viraEsquerda = true; // alterna o lado a cada desvio

void setup()
{
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
    Serial.begin(9600);
    parar();
    delay(1000);
}

void loop()
{
    long d = lerDistancia();
    Serial.println(d);

    if (d > 0 && d < DIST_MIN)
    {
        parar();
        delay(200);

        tras();
        delay(TEMPO_RE);
        parar();
        delay(200);

        if (viraEsquerda)
            girarEsquerda();
        else
            girarDireita();
        delay(TEMPO_GIRO);
        parar();
        delay(200);

        viraEsquerda = !viraEsquerda;
    }
    else
    {
        frente();
    }
    delay(50);
}

// Retorna distância em cm (média de 3 leituras); 0 se não houver leitura válida
long lerDistancia()
{
    long soma = 0;
    int validas = 0;
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(TRIG, LOW);
        delayMicroseconds(2);
        digitalWrite(TRIG, HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIG, LOW);

        long duracao = pulseIn(ECHO, HIGH, 30000); // timeout 30 ms (~5 m)
        if (duracao > 0)
        {
            soma += duracao * 0.034 / 2;
            validas++;
        }
        delay(10);
    }
    return validas > 0 ? soma / validas : 0;
}

void frente()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void tras()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void girarEsquerda()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void girarDireita()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void parar()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}