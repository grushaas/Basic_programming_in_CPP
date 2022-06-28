#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int ch, zn;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	double AddingFractions(Fraction frac)
	{
		ch = (numerator_ * frac.denominator_) + (this->denominator_ * frac.numerator_);
		zn = (this->denominator_ * frac.denominator_);
		return ch + zn;
	}

	bool operator==(Fraction frac)
	{
		return AddingFractions(frac) == frac.AddingFractions(frac);
	}

	bool operator>(Fraction frac)
	{
		return AddingFractions(frac) > frac.AddingFractions(frac);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << (!(f1 == f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << (!(f2 > f1) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << (!(f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << (!(f1 > f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
