#include <iostream>

int main()
{
  // datatypes variable
  int num1, num2;
  float area;
  double ans;

  //assining value

  std::cout << "Enter any number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;
  area = 6.9;
  ans = (num1 + num2)*area;
  std::cout << "Your ans is: " << ans << "\n";
  return(0);
}
