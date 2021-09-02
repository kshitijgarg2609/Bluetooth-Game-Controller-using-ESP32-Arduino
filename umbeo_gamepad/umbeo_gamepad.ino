#include "game_pins.h"
#include <BleComboKeyboard.h>
#include <BleComboMouse.h>

extern BleComboKeyboard *Keyboard;
extern BleComboMouse *Mouse;

boolean flg1=false;
boolean flg2=false;
boolean flg3=false;
boolean flg4=false;
boolean flg5=false;

void setup()
{
  Serial.begin(115200);
  initPins();
  Keyboard = new BleComboKeyboard("Umbeo");
  Keyboard->begin();
  Mouse = new BleComboMouse(Keyboard);
  Mouse->begin();
  Serial.println("WORKING");
}

void loop()
{
  controlFunction();
}

void controlFunction()
{
  function1(digitalRead(left_click)==LOW);
  function2(digitalRead(right_click)==LOW);
  function3(digitalRead(pause_play)==LOW);
  function4(digitalRead(volume_up)==LOW);
  function5(digitalRead(volume_down)==LOW);
}

void function1(boolean a)
{
  if(a==flg1)
  {
    return;
  }
  flg1=a;
  if(flg1)
  {
    Mouse->click(MOUSE_LEFT);
  }
}

void function2(boolean a)
{
  if(a==flg2)
  {
    return;
  }
  flg2=a;
  if(flg2)
  {
    Mouse->click(MOUSE_RIGHT);
  }
}

void function3(boolean a)
{
  if(a==flg3)
  {
    return;
  }
  flg3=a;
  if(flg3)
  {
    Keyboard->write(KEY_MEDIA_PLAY_PAUSE);
  }
}

void function4(boolean a)
{
  if(a==flg4)
  {
    return;
  }
  flg4=a;
  if(flg4)
  {
    Keyboard->write(KEY_MEDIA_VOLUME_UP);
  }
}

void function5(boolean a)
{
  if(a==flg5)
  {
    return;
  }
  flg5=a;
  if(flg5)
  {
    Keyboard->write(KEY_MEDIA_VOLUME_DOWN);
  }
}
