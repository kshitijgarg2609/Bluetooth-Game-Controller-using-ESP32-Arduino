#define left_click 25
#define right_click 26
#define pause_play 27
#define volume_up 32
#define volume_down 33

void initPins();

void initPins()
{
  pinMode(left_click,INPUT_PULLUP);
  pinMode(right_click,INPUT_PULLUP);
  pinMode(pause_play,INPUT_PULLUP);
  pinMode(volume_up,INPUT_PULLUP);
  pinMode(volume_down,INPUT_PULLUP);
}
