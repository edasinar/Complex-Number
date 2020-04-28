#pragma once

#include <iostream>

class KarmasikSayi
{
	friend std::ostream& operator<<(std::ostream& out, const KarmasikSayi& comp_num);
	friend std::istream& operator>>(std::istream& in, KarmasikSayi& comp_num);
public:
	KarmasikSayi() :real{ 0 }, imag{ 0 } {}
	KarmasikSayi(int real, int imag);

	KarmasikSayi(KarmasikSayi&);
	KarmasikSayi(KarmasikSayi&&);

	KarmasikSayi operator+(KarmasikSayi&);
	KarmasikSayi operator-(KarmasikSayi&);
	KarmasikSayi operator*(KarmasikSayi&);
	KarmasikSayi operator/(KarmasikSayi&);

	bool operator==(KarmasikSayi&);

private:
	int real; // reel kýsmý tutar.
	int imag; // karmaþýk kýsmý tutar.
};
