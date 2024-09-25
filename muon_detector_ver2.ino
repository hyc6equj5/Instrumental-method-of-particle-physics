#include <Wire.h>
int counts=0;
bool state_trig;
bool state_ch1;
bool state_ch2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //for communication to PC through a serial port
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(2,INPUT);
  Serial.println("Halo Muon!");
  attachInterrupt(digitalPinToInterrupt(2),trigger, RISING);

}

void loop() {
  // put your main code here, to run repeatedly:
}
  //state_trig = digitalRead(2); //read the input pin D2
  //if (state_trig==1)
 void trigger(){
    counts=counts+1;
    state_ch1 = digitalRead(5);  //read the pin D5
    state_ch2 = digitalRead(6);  //read the pin D6
    
    Serial.print("have a hit: ");
    Serial.print("Ch1:");
    Serial.print(state_ch1);
    Serial.print("Ch2:");
    Serial.print(state_ch2);
    Serial.print("total counts: ");
    Serial.println(counts);
    
    }
