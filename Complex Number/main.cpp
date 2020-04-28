#include <iostream>
#include "KarmasikSayi.h"

int main()
{
	KarmasikSayi a(2, 5);
	std::cout << a;
	std::cout << "###################" << std::endl;
	
	KarmasikSayi b;
	std::cout << b;
	std::cout << "###################" << std::endl;
	
	std::cout << a + b;
	std::cout << "###################" << std::endl;
	
	std::cout << a - b;
	std::cout << "###################" << std::endl;
	
	std::cout << a * b;
	std::cout << "###################" << std::endl;
	
	std::cout << a / b;
	std::cout << "###################" << std::endl;

	return 0;
}