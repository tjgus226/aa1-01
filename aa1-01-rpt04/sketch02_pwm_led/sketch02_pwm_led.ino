
int pwm = 0;
int led = 3;  // D3

// the setup function runs once when you press reset or power the board
void setup() {
  
}

// the loop function runs over and over again forever
void loop() {
  pwm = random(0,255);
  pwmLed(led,pwm);                      
}

void pwmLed(int led,int pwmValue){
  analogWrite(led,pwmValue);
  delay(100);
}
