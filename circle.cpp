#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE,NULL);

  setbkcolor(BLUE);

  circle(getmaxx()/2,getmaxy()/2,200);delay(2000);
  circle(getmaxx()/2,getmaxy()/2,175);delay(1500);
  circle(getmaxx()/2,getmaxy()/2,150);delay(1000);
  circle(getmaxx()/2,getmaxy()/2,125);delay(800);
  circle(getmaxx()/2,getmaxy()/2,100);delay(600);
  circle(getmaxx()/2,getmaxy()/2,75);delay(500);
  circle(getmaxx()/2,getmaxy()/2,50);delay(400);
  circle(getmaxx()/2,getmaxy()/2,25);delay(300);
  circle(getmaxx()/2,getmaxy()/2,10);delay(200);
  circle(getmaxx()/2,getmaxy()/2,5);delay(100);

  delay(5000);
  closegraph();
  return 0;
}
