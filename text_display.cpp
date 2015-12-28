#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE,NULL);
  int y = 20;
  int max = getmaxcolor();
  for(int i=0;i<max;i++)
  {
    setcolor(i);
    outtextxy(10,y,"Hello world");
    y+=10;
    delay(500);
  }
  delay(2000);
  closegraph();
  return 0;
}
