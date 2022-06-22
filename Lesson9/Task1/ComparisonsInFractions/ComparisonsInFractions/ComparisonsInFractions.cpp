﻿#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	double Abs()
	{
		return std::sqrt(numerator_ * numerator_ + denominator_ * denominator_);
	}

	bool operator==(Fraction frac)
	{
		return Abs() == frac.Abs();
	}
	bool operator!=(Fraction frac)
	{
		return !(*this == frac);
	}
	bool operator>(Fraction frac)
	{
		return Abs() > frac.Abs();
	}
	bool operator<(Fraction frac)
	{
		return frac > *this;
	}
	bool operator>=(Fraction frac)
	{
		return !(*this < frac);
	}
	bool operator<=(Fraction frac)
	{
		return !(*this > frac);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
