//program to draw heart

#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE, NULL);

  setbkcolor(WHITE);
  setcolor(RED);

  circle(50,50,40);
  circle(110,50,40);
  line(22,80,80,140);
  line(80,140,138,80);

  

  delay(10000);
  closegraph();
  return 0;
}
