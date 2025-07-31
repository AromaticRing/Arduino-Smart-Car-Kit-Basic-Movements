// Define motor control pins
#define ENA 5    // Left motor speed (PWM)
#define ENB 6    // Right motor speed (PWM)

#define IN1 9    // Left motor direction
#define IN2 11

#define IN3 7    // Right motor direction
#define IN4 8

// Default speed
int speedVal = 150;

void setup() {
  // Set all motor pins as output
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
 
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
 
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  moveForward();
  delay(2000);

  moveBackward();
  delay(2000);

  leftTurn();
  delay(1500);

  rightTurn();
  delay(1500);

  accelerateSpeed();
  delay(2000);

  decelerateSpeed();
  delay(2000);

  stopMotors();
  delay(2000);
}

// ========== Movement Functions ==========

void rightTurn() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);
}

void leftTurn() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);
}

void moveForward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);
}

void moveBackward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);
}

void accelerateSpeed() {
  for (int i = 100; i <= 255; i += 10) {
    moveForward();
    analogWrite(ENA, i);
    analogWrite(ENB, i);
    delay(200);
  }
}

void decelerateSpeed() {
  for (int i = 255; i >= 100; i -= 10) {
    moveForward();
    analogWrite(ENA, i);
    analogWrite(ENB, i);
    delay(200);
  }
}

void stopMotors() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}