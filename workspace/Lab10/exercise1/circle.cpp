#include "circle.h"
#include <math.h>

double circle::diameter()
{
  double ans=0;
  ans=2*radius;
  return(ans);
}

double circle::area()
{
  double ans=0;
  ans=3.14159*radius*radius;
  return(ans);
}

double circle::circumference()
{
  double ans=0;
  ans=3.14159*2*radius;
  return(ans);
}

double circle::getRadius()
{
  return(radius);
}

double circle::getX()
{
  return(xPos);
}

double circle::getY()
{
  return(yPos);
}

void circle::setX(double x)
{
  xPos=x;
}

void circle::setY(double y)
{
  yPos=y;
}

double circle::distanceToOrigin()
{
  double ans=0;
  ans=sqrt(xPos*xPos+yPos*yPos);
  return(ans);
}
//    returns the distance from the center of the circle to the origin
//    HINT: Find out how to calculate the distance between two points and recall the origin is at (0,0)

bool circle::intersect(const circle& otherCircle)
{
  if((otherCircle.xPos-xPos)<radius && (otherCircle.yPos-yPos)<radius)
  {
    return(true);
  }
  else
  {
    return(false);
  }
}
//  Take another Circle by const reference (see more notes below)
//  Returns true if the other Circle intersects with it, false otherwise

bool circle::setRadius(double r)
{
  if(r>0)
  {
    radius=r;
    return(true);
  }
  else
  {
    radius=0;
    return(false);
  }
}
//  sets the radius to r and returns true if r is greater than zero, otherwise sets the radius to zero and returns false
//  Remember, you will need a header file (.h) and an implementation file (.cpp)
