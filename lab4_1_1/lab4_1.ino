#define PWMCHANNEL 1 // can be 0:7, just needs to be unique 
#define ONEmS_COUNTS ((1<<12)*50/1000) // 2^12 bit resolution * freq / 1000 (ms/s)
void setup() {
 ledcAttach(4, 50, 12);
}

void loop(){
  int min_counts = .5*ONEmS_COUNTS; // conservative is 1mS for minimum 
 int max_counts = 2.5*ONEmS_COUNTS; // conservative is 2mS for max duty cycle 
 for (int i=min_counts ; i < max_counts ; i+=1) {
 ledcWrite(PWMCHANNEL, i); // sweep servo forward 
 delay(20); // need this 20mS for 1 cycle at 50Hz 
 }
 for (int i=max_counts ; i > min_counts ; i-=1) {
 ledcWrite(PWMCHANNEL, i); // sweep servo back 
 delay(20); // need this 20mS for 1 cycle at 50Hz 
 }
 }

