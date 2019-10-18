// 求出-100到100之间整数的和,sum终值为0 
#include <iostream>
int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
		
	std::cout << sum;
	return 0;
} 
