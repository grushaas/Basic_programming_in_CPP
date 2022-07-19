#include <iostream>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	void reduction(int& numerator_, int& denominator_)
	{
		int gcd = std::gcd(numerator_, denominator_);

		numerator_ /= gcd;
		denominator_ /= gcd;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;

		reduction(numerator_, denominator_);
	}

	bool operator==(Fraction frac)
	{
		return numerator_ == frac.numerator_ && denominator_ == frac.denominator_;
	}

	bool operator!=(Fraction frac)
	{
		return !(*this == frac);
	}

	bool operator<(Fraction frac)
	{
		return *this != frac && !(*this > frac);
	}

	bool operator>(Fraction frac)
	{
		return numerator_ * frac.denominator_ > frac.numerator_ * denominator_;
	}

	bool operator<=(Fraction frac)
	{
		return *this == frac || !(*this > frac);
	}

	bool operator>=(Fraction frac)
	{
		return *this == frac || (frac < *this);
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
