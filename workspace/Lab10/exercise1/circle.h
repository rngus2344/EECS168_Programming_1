#ifndef CIRCLE_H
#define CIRCLE_H

class circle
{
private:
  double radius;
  double xPos;
  double yPos;

public:
  double diameter();
  double area();
  double circumference();
  double getRadius();
  double getX();
  double getY();
  void setX(double x);
  void setY(double y);
  double distanceToOrigin();
  bool intersect(const circle& otherCircle);
  bool setRadius(double r);
};
#endif
