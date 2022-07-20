#include <iostream>

int main()
{
	for(int i=0; i<4; i++)
	{
		for(int j=4; j>i; j--)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
	return(0);
}
