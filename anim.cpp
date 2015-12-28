#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
  int GRAPHIC_DRIVER = DETECT, GRAPHIC_MODE;
  initgraph(&GRAPHIC_DRIVER, &GRAPHIC_MODE, NULL);

  for(int i=0; i<10; i++)
  {
    circle(100,100,25);delay(50);cleardevice();
    circle(100,200,25);delay(50);cleardevice();
    circle(100,300,25);delay(50);cleardevice();
    circle(100,400,25);delay(50);cleardevice();
    circle(100,500,25);delay(50);cleardevice();

    circle(200,100,25);delay(50);cleardevice();
    circle(200,200,25);delay(50);cleardevice();
    circle(200,300,25);delay(50);cleardevice();
    circle(200,400,25);delay(50);cleardevice();
    circle(200,500,25);delay(50);cleardevice();

    circle(300,100,25);delay(50);cleardevice();
    circle(300,200,25);delay(50);cleardevice();
    circle(300,300,25);delay(50);cleardevice();
    circle(300,400,25);delay(50);cleardevice();
    circle(300,500,25);delay(50);cleardevice();

    circle(400,100,25);delay(50);cleardevice();
    circle(400,200,25);delay(50);cleardevice();
    circle(400,300,25);delay(50);cleardevice();
    circle(400,400,25);delay(50);cleardevice();
    circle(400,500,25);delay(50);cleardevice();

    circle(500,100,25);delay(50);cleardevice();
    circle(500,200,25);delay(50);cleardevice();
    circle(500,300,25);delay(50);cleardevice();
    circle(500,400,25);delay(50);cleardevice();
    circle(500,500,25);delay(50);cleardevice();

    cleardevice();
  }
  delay(2000);
  closegraph();
  getch();
}
