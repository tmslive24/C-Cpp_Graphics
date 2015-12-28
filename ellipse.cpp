#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE,NULL);

  ellipse(200,200,360,180,100,50);
  ellipse(200,200,360,180,100,100);
  ellipse(200,200,360,180,100,150);
  ellipse(200,200,360,180,100,200);
  //fillellipse(getmaxx()/2,getmaxy()/2,100,50);

  delay(3000);
  closegraph();
  return 0;
}
