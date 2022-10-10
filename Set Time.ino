#include <DS3231.h>
DS3231  rtc(SDA, SCL);

void setup()
{

  Serial.begin(9100);
  
  rtc.begin();
 
  rtc.setDOW(MONDAY);
  rtc.setTime(6, 0, 0);   
  rtc.setDate(1, 1, 2022);   

void loop() {
  // put your main code here, to run repeatedly:

}
