#include <Arduino.h>
int t = 100; 
int channel_PWM = 1;  
int freq_PWM = 50;  //50HZ 
int res_PWM = 12;  
const int  PWM_PIN = 4; //pin 4
void setup() {
  ledcAttach(4,50,12);
}
//正传t秒 停止t秒 反转t秒 停止t秒 循环...
void loop() {
  ledcWrite(channel_PWM,52); //spin for 5s
  delay(100);
  ledcWrite(channel_PWM, 77);  //stop for 5s
  delay(100);
  ledcWrite(channel_PWM, 102);  //reverse for 5s
  delay(100);
  ledcWrite(channel_PWM, 77);  //stop for 5s
  delay(100);
  
}