int redLED_8 = 9;
int greenLED_4 = 10;
int yellowLED_2 = 11;
int blueLED_1 = 12;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED_8, OUTPUT);
  pinMode(greenLED_4, OUTPUT);
  pinMode(yellowLED_2, OUTPUT);
  pinMode(blueLED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  countDown(13);
}

void countDown(int num){
  if (num > 16)
    return;
  for(int i = num; i >= 0; i--){
    decimalToBinary(i);
    delay(delayTime);
  }
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
