#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	void reduction(int& numerator, int& denominator)
	{
		int nod = 0;

		while (nod != 1)
		{
			for (int i = numerator; i > 0; i--)
			{
				if (numerator % i == 0 && denominator % i == 0)
				{
					nod = i;
					break;
				}
			}

			numerator /= nod;
			denominator /= nod;
		}
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator+(Fraction frac)
	{
		if (denominator_ == frac.denominator_)
		{
			int numerator = numerator_ + frac.numerator_;
			return Fraction(numerator, denominator_);
		}

		int stn = denominator_ * frac.denominator_;
		int numerator1 = frac.denominator_ * numerator_;
		int numerator2 = denominator_ * frac.numerator_;
		int numerator = numerator1 + numerator2;
		
		return Fraction(numerator, stn);
	}

	Fraction operator-(Fraction frac)
	{
		if (denominator_ == frac.denominator_)
		{
			int numerator = numerator_ - frac.numerator_;
			return Fraction(numerator, denominator_);
		}

		int stn = denominator_ * frac.denominator_;
		int numerator1 = frac.denominator_ * numerator_;
		int numerator2 = denominator_ * frac.numerator_;
		int numerator = numerator1 - numerator2;

		return Fraction(numerator, stn);
	}

	Fraction operator*(Fraction frac)
	{
		int numerator = numerator_ * frac.numerator_;
		int denominator = denominator_ * frac.denominator_;
		
		reduction(numerator, denominator);
		return Fraction(numerator, denominator);
	}

	Fraction operator/(Fraction frac)
	{
		int numerator = numerator_ * frac.denominator_;
		int denominator = denominator_ * frac.numerator_;

		reduction(numerator, denominator);
		return Fraction(numerator, denominator);
	}

	Fraction operator-()
	{
		Fraction negated = *this;
		negated.numerator_ *= -1;

		return negated;
	}

	Fraction& operator++()
	{
		numerator_++;
		denominator_++;
		return *this;
	}

	Fraction operator++(int)
	{
		Fraction tmp = *this;
		++(*this);
		return tmp;
	}

	Fraction& operator--()
	{
		numerator_--;
		denominator_--;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction tmp = *this;
		--(*this);
		return tmp;
	}

	void print()
	{
		std::cout << numerator_ << "/" << denominator_ << std::endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int numerator1, denominator1;
	int numerator2, denominator2;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator2;

	Fraction f1(numerator1, denominator1);
	Fraction f2(numerator2, denominator2);

	Fraction add = f1 + f2;
	Fraction sub = f1 - f2;
	Fraction multi = f1 * f2;
	Fraction divide = f1 / f2;
	Fraction minusf1 = -f1;
	Fraction minusf2 = -f2;
	Fraction f1_pre = ++f1 * f2;
	Fraction f2_pre = f1 * ++f2;
	Fraction f1_post = f1++ * f2;
	Fraction f2_post = f1 * f2++;
	Fraction f1_pre_min = --f1 * f2;
	Fraction f2_pre_min = f1 * --f2;
	Fraction f1_post_min = f1-- * f2;
	Fraction f2_post_min = f1 * f2--;

	std::cout << numerator1 << "/" << denominator1 << " + " << numerator2 << "/" << denominator2 << " = ";
	add.print();

	std::cout << numerator1 << "/" << denominator1 << " - " << numerator2 << "/" << denominator2 << " = ";
	sub.print();

	std::cout << numerator1 << "/" << denominator1 << " * " << numerator2 << "/" << denominator2 << " = ";
	multi.print();

	std::cout << numerator1 << "/" << denominator1 << " / " << numerator2 << "/" << denominator2 << " = ";
	divide.print();

	std::cout << numerator1 << "/" << denominator1 << " унарный -" << " = ";
	minusf1.print();

	std::cout << numerator2 << "/" << denominator2 << " унарный -" << " = ";
	minusf2.print();

	std::cout << "++" << numerator1 << "/" << denominator1 << " * " << numerator2 << "/" << denominator2 << " = ";
	f1_pre.print();

	std::cout << "Значение дроби 1: ";
	f1.print();

	std::cout << numerator1 << "/" << denominator1 << "--" << " * " << numerator2 << "/" << denominator2 << " = ";
	f1_post_min.print();

	std::cout << "Значение дроби 1: ";
	f1.print();

}
