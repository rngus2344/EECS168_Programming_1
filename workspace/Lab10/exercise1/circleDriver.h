#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H
#include "circle.h"

class circleDriver
{
private:
  circle circ1;
  circle circ2;
  void obtainCircles();
  void printCircleInfo();

public:
  void run();
};
#endif
