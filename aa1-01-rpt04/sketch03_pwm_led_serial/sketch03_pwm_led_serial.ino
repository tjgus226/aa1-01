
int pwm = 0;
int led = 3;  // D3

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  pwm = random(0,255);
  pwmLed(led,pwm);   

  Serial.print("AA01,AA02, LED: ");
  Serial.println(pwm);
  delay(10);
}

void pwmLed(int led,int pwmValue){
  analogWrite(led,pwmValue);
  delay(100);
}
