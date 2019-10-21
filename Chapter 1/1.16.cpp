#include <iostream>

int main()
{
	int num = 0,value = 0;
	while (std::cin >> num)
	{
		value += num;
	}
	
	std::cout << value;
	
	return 0;
} 
