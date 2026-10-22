// Controle de 2 motores DC com ponte H L298N + Arduino UNO
// Jumpers ENA/ENB mantidos -> motores sempre na velocidade máxima
 
// Motor A
const int IN1 = 6;
const int IN2 = 7;
// Motor B
const int IN3 = 10;
const int IN4 = 11;
 
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  parar();
}
 
void loop() {
  frente();
  delay(2000);
 
  parar();
  delay(500);
 
  tras();
  delay(2000);
 
  parar();
  delay(500);
 
  girarEsquerda();
  delay(1000);
 
  parar();
  delay(500);
 
  girarDireita();
  delay(1000);
 
  parar();
  delay(2000);
}
 
void frente() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);   // Motor A para frente
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);   // Motor B para frente
}
 
void tras() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, HIGH);  // Motor A para trás
  digitalWrite(IN3, LOW);  digitalWrite(IN4, HIGH);  // Motor B para trás
}
 
void girarEsquerda() {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, HIGH);  // Motor A para trás
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);   // Motor B para frente
}
 
void girarDireita() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);   // Motor A para frente
  digitalWrite(IN3, LOW);  digitalWrite(IN4, HIGH);  // Motor B para trás
}
 
void parar() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
}