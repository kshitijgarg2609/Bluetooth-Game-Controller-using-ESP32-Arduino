#include "game_pins.h"

void setup()
{
  Serial.begin(115200);
  initPins();
}

void loop()
{
  String a=String(digitalRead(left_click));
  String b=String(digitalRead(right_click));
  String c=String(digitalRead(pause_play));
  String d=String(digitalRead(volume_up));
  String e=String(digitalRead(volume_down));
  Serial.println(a+b+c+d+e);
}
