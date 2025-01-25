#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define TRIG_PIN 9
#define ECHO_PIN 8
#define LED_PIN 7
#define BUZZER_PIN 13
#define SERVO_PIN 10

const int THRESHOLD_DISTANCE = 20;

Servo servo;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  servo.attach(SERVO_PIN);
  servo.write(90);
  lcd.print("Proximity Alert");
  delay(2000);
  lcd.clear();
}

void loop() {
  long duration;
  int distance;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm ");
  
  if (distance > 0 && distance < THRESHOLD_DISTANCE) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    servo.write(0);
    lcd.setCursor(0, 1);
    lcd.print("Object Detected ");
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    servo.write(90);
    lcd.setCursor(0, 1);
    lcd.print("Safe Range     ");
  }

  delay(100);
}
