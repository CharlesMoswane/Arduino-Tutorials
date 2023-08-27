int redLED = 9;
int redDelayTime = 500;

int greenLED = 10;
int greenDelayTime = 500;

int yellowLED = 11;
int yellowDelayTime = 500;

int blueLED = 12;
int blueDelayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(redLED, HIGH);
  // delay(redDelayTime);
  // digitalWrite(redLED, LOW);
  // delay(redDelayTime);
  blinkLEDNTimes(redLED,redDelayTime,1);

  digitalWrite(greenLED, HIGH);
  delay(greenDelayTime);
  digitalWrite(greenLED, LOW);
  delay(greenDelayTime);

  digitalWrite(yellowLED, HIGH);
  delay(yellowDelayTime);
  digitalWrite(yellowLED, LOW);
  delay(yellowDelayTime);

  digitalWrite(blueLED, HIGH);
  delay(blueDelayTime);
  digitalWrite(blueLED, LOW);
  delay(blueDelayTime);
}

void blinkLEDNTimes(int LED, int delayT, int count){
  digitalWrite(LED, HIGH);
  delay(delayT);
  digitalWrite(LED, LOW);
  delay(delayT);
}
