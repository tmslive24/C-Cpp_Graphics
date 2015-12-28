#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE,NULL);

  setbkcolor(9);

  rectangle(50,50,75,75);
  rectangle(600,50,625,75);delay(100);
  rectangle(75,75,125,125);
  rectangle(550,75,600,125);delay(300);
  rectangle(125,125,200,200);
  rectangle(475,125,550,200);delay(800);
  rectangle(200,200,300,300);
  rectangle(375,200,475,300);delay(1000);
  rectangle(250,250,425,425);

  delay(5000);
  closegraph();
  return 0;
}
