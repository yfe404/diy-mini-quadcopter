int pot = A0; //Input from the potentiometer oin pin A0
int pwm = 5;  //PWM output on pin D3

void setup() {
  pinMode(pot,INPUT);
  pinMode(pwm,OUTPUT); 
}

void loop() {
  int value = map(analogRead(pot),0,1024,0,255);
  analogWrite(pwm,value);
  delay(10);  
}
