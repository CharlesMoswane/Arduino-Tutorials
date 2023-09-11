int redLED_8 = 9;
int redDelayTime = 500;

int greenLED_4 = 10;
int greenDelayTime = 500;

int yellowLED_2 = 11;
int yellowDelayTime = 500;

int blueLED_1 = 12;
int blueDelayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED_8, OUTPUT);
  pinMode(greenLED_4, OUTPUT);
  pinMode(yellowLED_2, OUTPUT);
  pinMode(blueLED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  printToLED(true, false, true, true);
  blinkLEDNTimes(redLED_8,redDelayTime,2);
  blinkLEDNTimes(greenLED_4,greenDelayTime,2);
  blinkLEDNTimes(yellowLED_2,yellowDelayTime,3);
  blinkLEDNTimes(blueLED_1,blueDelayTime,4);
  decimalToBinary(13);
}

void decimalToBinary(int num){
  printToLED(true, true, false, true);
}

void printToLED(bool redOn, bool greenOn, bool yellowOn, bool blueOn){
  // Reset the number
  digitalWrite(redLED_8, LOW);
  digitalWrite(greenLED_4, LOW);
  digitalWrite(yellowLED_2, LOW);
  digitalWrite(blueLED_1, LOW);

  // Set the new number
  if(redOn)
    digitalWrite(redLED_8, HIGH);
  if(greenOn)
    digitalWrite(greenLED_4, HIGH);
  if(yellowOn)
    digitalWrite(yellowLED_2, HIGH);
  if(blueOn)
    digitalWrite(blueLED_1, HIGH);
}

void blinkLEDNTimes(int LED, int delayT, int count){
  for(int i = 0; i < count; i++){
    digitalWrite(LED, HIGH);
    delay(delayT);
    digitalWrite(LED, LOW);
    delay(delayT);
  }
}
