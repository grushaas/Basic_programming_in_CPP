#include <iostream>

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

	bool operator==(Fraction frac)
	{
		bool numerator = numerator_ == frac.numerator_;
		bool denominator = denominator_ == frac.denominator_;
		if (numerator == false || denominator == false)
		{
			return false;
		}
		return true;
	}

	bool operator!=(Fraction frac)
	{
		bool numerator = numerator_ == frac.numerator_;
		bool denominator = denominator_ == frac.denominator_;
		if (numerator == false || denominator == false)
		{
			return true;
		}
		return false;
	}

	bool operator<(Fraction frac)
	{
		bool numerator = numerator_ < frac.numerator_;
		bool denominator = denominator_ < frac.denominator_;
		if (numerator == true && denominator == true)
		{
			return false;
		}
		return true;
	}

	bool operator>(Fraction frac)
	{
		bool numerator = frac.numerator_ < numerator_;
		bool denominator = frac.denominator_ < denominator_;
		if (numerator == true && denominator == true)
		{
			return false;
		}
		return true;
	}

	bool operator<=(Fraction frac)
	{
		bool numerator = frac.numerator_ < numerator_;
		bool denominator = frac.denominator_ < denominator_;
		if (numerator == true && denominator == true)
		{
			return true;
		}
		return false;
	}

	bool operator>=(Fraction frac)
	{
		bool numerator = numerator_ < frac.numerator_;
		bool denominator = denominator_ < frac.denominator_;
		if (numerator == true && denominator == true)
		{
			return true;
		}
		return false;
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
