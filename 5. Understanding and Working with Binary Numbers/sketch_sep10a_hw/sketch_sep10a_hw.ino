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
  printToLED(true, false, true, true);
  blinkLEDNTimes(redLED,redDelayTime,1);
  blinkLEDNTimes(greenLED,greenDelayTime,2);
  blinkLEDNTimes(yellowLED,yellowDelayTime,3);
  blinkLEDNTimes(blueLED,blueDelayTime,4);
}

void printToLED(bool redOn, bool greenOn, bool yellowOn, bool blueOn){
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(blueLED, HIGH);
}

void blinkLEDNTimes(int LED, int delayT, int count){
  for(int i = 0; i < count; i++){
    digitalWrite(LED, HIGH);
    delay(delayT);
    digitalWrite(LED, LOW);
    delay(delayT);
  }
}
