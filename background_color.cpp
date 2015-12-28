#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GD = DETECT,GM;
  initgraph(&GD,&GM,NULL);

  for(int i=0;i<10;i++)
  {
    setbkcolor(i);
    delay(500);
  }
  closegraph();
  return 0;
}
