const int greenPin = 9;
const int redPin = 11;
const int bluePin = 10;

const int redsens = A2;
const int greensens = A0;
const int bluesens = A1;

int redval = 0;
int blueval = 0;
int greenval = 0;

int redsensval = 0;
int greensensval = 0;
int bluesensval = 0;

void setup() {
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  

}

void loop() {
  redsensval = analogRead(redsens);
  delay(5);
  bluesensval = analogRead(bluesens);
  delay(5);
  greensensval = analogRead(greensens);  
  delay(5);
  Serial.print("Red: ");
  Serial.print(redsensval);
  Serial.print("\tGreen: ");
  Serial.print(greensensval);
  Serial.print("\tBlue: ");
  Serial.println(bluesensval);

  analogWrite(redPin,(redsensval/4));
  analogWrite(greenPin,(greensensval/4));
  analogWrite(bluePin,(bluesensval/4));
}
