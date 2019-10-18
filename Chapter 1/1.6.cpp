// 原程序片段不合法。加上分号后编译器将输出语句识别为多行。 去掉分号即可。
// 修改后 
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The num of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
} 
