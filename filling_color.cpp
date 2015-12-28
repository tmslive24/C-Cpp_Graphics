#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE,NULL);

  for(int i=0;i<5;i++)
  {
    setbkcolor(YELLOW);
    setcolor(BLACK);
    outtextxy(getmaxx()/2,getmaxy()/2,"MRINAL");delay(1000);
    setbkcolor(BLACK);
    setcolor(YELLOW);
    outtextxy(getmaxx()/2,getmaxy()/2,"MRINAL");delay(1000);
  }

  delay(3000);
  closegraph();
  return 0;
}
