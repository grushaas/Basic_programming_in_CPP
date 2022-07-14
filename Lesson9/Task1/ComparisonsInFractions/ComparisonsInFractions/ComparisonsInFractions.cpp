#include <iostream>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	//int gcd(int a, int b)
	//{
	//	return b ? a : gcd(b, a % b);
	//}

	void reduction(int& numerator_, int& denominator_, Fraction& frac)
	{
		int lcd = std::gcd(3, 11);

		int multiplier1 = lcd / denominator_;
		int multiplier2 = lcd / frac.denominator_;

		numerator_ *= multiplier1;
		denominator_ *= multiplier1;

		frac.numerator_ *= multiplier2;
		frac.denominator_ *= multiplier2;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
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
		reduction(numerator_, denominator_, frac);

		return (numerator_ < frac.numerator_) && (denominator_ < denominator_);
	}

	bool operator>(Fraction frac)
	{
		return (frac.numerator_ < numerator_) && (frac.denominator_ < denominator_);
	}

	bool operator<=(Fraction frac)
	{
		return !((frac.numerator_ < numerator_) && (frac.denominator_ < denominator_));
	}

	bool operator>=(Fraction frac)
	{
		return !((numerator_ < frac.numerator_) && (denominator_ < frac.denominator_));
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
