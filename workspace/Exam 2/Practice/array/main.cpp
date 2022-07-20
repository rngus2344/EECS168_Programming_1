#include <iostream>

int main()
{
  double nums[10];
  double values;
  for(int i=0; i<10; i++)
  {
    std::cin >> values;
    nums[i]=values;
    for(i=9; i>=0; i--)
    {
      std::cout << nums[i] << '\n';
    }
  }
  return(0);
}
