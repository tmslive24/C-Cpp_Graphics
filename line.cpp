#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT,GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER,&GRAPHIC_MODE,NULL);

  line(100,100,300,100);delay(500);
  line(300,100,300,200);delay(500);
  line(300,200,100,200);delay(500);
  line(100,200,100,100);delay(500);

  outtextxy(150,150,"Hello, MRINAL");
  delay(2000);

  closegraph();
  return 0;
}
