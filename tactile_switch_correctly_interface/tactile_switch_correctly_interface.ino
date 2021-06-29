int button = 2;
int button_pressed_flag = 0;
int turn_on_led = 0; 
int LED1 = 3;
int LED2 = 4; 


void setup() {
  
  pinMode(button,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

}

void loop() {
  if(digitalRead(button) == LOW && button_pressed_flag == 0 ){
    button_pressed_flag = 1;
  }
  else if(digitalRead(button) == HIGH && button_pressed_flag == 1 ){
    if(turn_on_led == 1){
    turn_on_led = 0;
    }
    else{
      turn_on_led = 1;
    }
    button_pressed_flag = 0;
  }

  if(turn_on_led == 1 && digitalRead(button) == HIGH && button_pressed_flag == 0)  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
  }
  else if(turn_on_led == 0 && digitalRead(button) == HIGH && button_pressed_flag == 0){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);    
  }
}
