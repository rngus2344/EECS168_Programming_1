#include "circleDriver.h"
#include <iostream>

void circleDriver::obtainCircles()
{
  double temp=0;
  std::cout << "Input x position for circle 1: ";
  std::cin >> temp;
  circ1.setX(temp);
  std::cout << "Input y position for circle 1: ";
  std::cin >> temp;
  circ1.setY(temp);
  do
  {
    std::cout << "Input a valid radius for circle 1: ";
    std::cin >> temp;
    circ1.setRadius(temp);
  } while(circ1.setRadius(temp)==false);

  std::cout << "\nInput x position for circle 2: ";
  std::cin >> temp;
  circ2.setX(temp);
  std::cout << "Input y position for circle 2: ";
  std::cin >> temp;
  circ2.setY(temp);
  do
  {
    std::cout << "Input a valid radius for circle 2: ";
    std::cin >> temp;
    circ2.setRadius(temp);
  } while(circ2.setRadius(temp)==false);
}
//  Talk with the user to obtain the positions and radii for two Circles from
//  the user. Repeats prompts until the user gives valid values for the radii
//  It does not validate the values, but rather checks the return value from a
//  call to Circle's setRadius method

void circleDriver::printCircleInfo()
{
  std::cout << "\nInformation for Circle 1: \nlocation: (" << circ1.getX() << ", ";
  std::cout << circ1.getY() << ") \ndiameter: " << circ1.diameter() << '\n';
  std::cout << "area: " << circ1.area() << "\ncircumference: " << circ1.circumference();
  std::cout << "\ndistance from the origin: " << circ1.distanceToOrigin() << "\n\n";

  std::cout << "Information for Circle 2: \nlocation: (" << circ2.getX() << ", ";
  std::cout << circ2.getY() << ") \ndiameter: " << circ2.diameter() << '\n';
  std::cout << "area: " << circ2.area() << "\ncircumference: " << circ2.circumference();
  std::cout << "\ndistance from the origin: " << circ2.distanceToOrigin() << "\n\n";
  std::cout << "The circles ";
  if(circ1.intersect(circ2)==true)
  {
    std::cout << "intersect.";
  }
  else
  {
    std::cout << "do not intersect.";
  }
  std::cout << '\n';
}
//  Prints the following information about each of the Circles to the screen:
//  The location of the Circle's center (xPos, yPos), the distance from the origin,
//  each area, circumference, diameter
//  Lastly print whether or not the two circles intersect

void circleDriver::run()
{
  obtainCircles();
  printCircleInfo();
}
//  run merely calls all the other methods. Here's your definition for run()
