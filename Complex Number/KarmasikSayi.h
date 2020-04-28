#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>

class KarmasikSayi
{
	friend std::ostream& operator<<(std::ostream& out, const KarmasikSayi& comp_num);
	friend std::istream& operator>>(std::istream& in, KarmasikSayi& comp_num);
public:
	KarmasikSayi() :real{ 0 }, imag{ 0 } {}
	KarmasikSayi(int real, int imag);

	 KarmasikSayi(KarmasikSayi&);
	 KarmasikSayi(KarmasikSayi&& comp_num) noexcept: real(std::move(comp_num.real)), imag(std::move(comp_num.imag)) 
	{
		std::cout << "Move constructor:" << std::endl;
	}

	KarmasikSayi operator+(KarmasikSayi&);
	KarmasikSayi operator-(KarmasikSayi&);
	KarmasikSayi operator*(KarmasikSayi&);
	KarmasikSayi operator/(KarmasikSayi&);

	bool operator==(KarmasikSayi&);

private:
	double real; // reel kýsmý tutar.
	double imag; // karmaþýk kýsmý tutar.
};
