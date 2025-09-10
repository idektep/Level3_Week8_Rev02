 //-----------------------------------------------Servo1 Function--------------------------------------------------//
void M1_1() {
  pos1++;
  delay(delay_value);
  Serial.print("servo1 ");
  Serial.println(pos1);
  idektep.setPWM(servo1, 0, angleToPulse(pos1));
  if (pos1 >= 160) {
    pos1 = 160;
    idektep.setPWM(servo1, 0, angleToPulse(pos1));
  }
}
void M1_2() {
  pos1--;
  delay(delay_value);
  Serial.print("servo1 ");
  Serial.println(pos1);
  idektep.setPWM(servo1, 0, angleToPulse(pos1));
  if (pos1 <= 20) {
    pos1 = 20;
    idektep.setPWM(servo1, 0, angleToPulse(pos1));
  }
}

//-----------------------------------------------Servo2 Function--------------------------------------------------//
void M2_1() {
  
}
void M2_2() {

}

//-----------------------------------------------Servo3 Function--------------------------------------------------//
void M3_1() {
 
}
void M3_2() {

}

//-----------------------------------------------servo4 Function--------------------------------------------------//
void M4_1() {
  
}
void M4_2() {

}

//-----------------------------------------------servo5 Function--------------------------------------------------//
void M5_1() {
 
}
void M5_2() {
  

}
