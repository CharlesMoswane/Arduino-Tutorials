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
  blinkLEDNTimes(redLED,redDelayTime,1);
  blinkLEDNTimes(greenLED,greenDelayTime,1);
  blinkLEDNTimes(yellowLED,yellowDelayTime,1);
  blinkLEDNTimes(blueLED,blueDelayTime,1);
}

void decimalToBinary(boolean redOn, boolean greenOn, boolean yellowOn, boolean blueOn){
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(yellowLED, HIGH);
}

void blinkLEDNTimes(int LED, int delayT, int count){
  for(int i = 0; i < count; i++){
    digitalWrite(LED, HIGH);
    delay(delayT);
    digitalWrite(LED, LOW);
    delay(delayT);
  }
}
