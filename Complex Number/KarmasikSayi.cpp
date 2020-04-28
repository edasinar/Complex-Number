#include "KarmasikSayi.h"

KarmasikSayi::KarmasikSayi(int real, int imag)
{
	this->real = real;
	this->imag = imag;
}

KarmasikSayi::KarmasikSayi(KarmasikSayi& comp_num)
{
	real = comp_num.real;
	imag = comp_num.imag;
}

KarmasikSayi::KarmasikSayi(KarmasikSayi&& comp_num)
{
	real = comp_num.real;
	imag = comp_num.imag;

}

KarmasikSayi KarmasikSayi::operator+(KarmasikSayi& comp_num)
{
	KarmasikSayi temp;
	temp.real = real + comp_num.real;
	temp.imag = imag + comp_num.imag;

	return temp;
}

KarmasikSayi KarmasikSayi::operator-(KarmasikSayi& comp_num)
{
	KarmasikSayi temp;
	temp.real = real - comp_num.real;
	temp.imag = imag - comp_num.imag;

	return temp;
}

KarmasikSayi KarmasikSayi::operator*(KarmasikSayi& comp_num)
{
	KarmasikSayi temp;
	temp.real = (real * comp_num.real) - (imag * comp_num.imag);
	temp.imag = (real * comp_num.imag) + (imag * comp_num.real);

	return temp;

}

KarmasikSayi KarmasikSayi::operator/(KarmasikSayi& comp_num)
{
	KarmasikSayi temp;
	if (real == 0 && imag == 0)
	{
		temp.real = 0;
		temp.imag = 0;
		return temp;
	}
	if (comp_num.real == 0 && comp_num.imag == 0)
	{
		throw std::invalid_argument("this division is invalid!");
	}

	temp.real = ((real * comp_num.real) + (imag * comp_num.imag)) / ((comp_num.real * comp_num.real) + (comp_num.imag * comp_num.imag));
	temp.imag = ((imag * comp_num.real) - (real * comp_num.imag)) / ((comp_num.real * comp_num.real) + (comp_num.imag * comp_num.imag));

	return temp;
}

bool KarmasikSayi::operator==(KarmasikSayi& comp_num)
{
	if (real == comp_num.real && imag == comp_num.imag)
		return true;
	else
		return false;
}

std::ostream& operator<<(std::ostream& out, const KarmasikSayi& comp_num)
{
	out << comp_num.real << "+ (" << comp_num.imag << "i)" << std::endl;

	return out;
}

std::istream& operator>>(std::istream& in, KarmasikSayi& comp_num)
{
	in >> comp_num.real;

	in >> comp_num.imag;

	return in;
}
