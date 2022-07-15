#include <iostream>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	int lcm(int denominator1, int denominator2)
	{
		return std::gcd(denominator1, denominator2) * denominator1 * denominator2;
	}

	void reduction(int& numerator_, int& denominator_)
	{
		int gcd = std::gcd(numerator_, denominator_);

		if (gcd != 1)
		{
			numerator_ /= gcd;
			denominator_ /= gcd;
		}
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
		int lcmd = lcm(denominator_, frac.denominator_);
		int multiplier1 = lcmd / denominator_;
		int multiplier2 = lcmd / frac.denominator_;

		numerator_ *= multiplier1;
		frac.numerator_ *= multiplier2;

		return numerator_ > frac.numerator_;
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
