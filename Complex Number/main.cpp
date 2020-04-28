#include <iostream>
#include "KarmasikSayi.h"

int main()
{
	KarmasikSayi a(2, 5);
	std::cout << a;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	KarmasikSayi b(2, -5);
	std::cout << b;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << a + b;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << a - b;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << a * b;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << a / b;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << ((a == b) ? "esit" : "esit degil");
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	KarmasikSayi f(6, -19);
	KarmasikSayi C(f);
	std::cout << C;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	KarmasikSayi e(std::move(f));
	std::cout << e;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	return 0;
}