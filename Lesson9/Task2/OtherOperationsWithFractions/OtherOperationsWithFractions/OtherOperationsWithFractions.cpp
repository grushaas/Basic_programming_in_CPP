#include <iostream>
#include <string>
#include <numeric>
#include "Except.h"

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

		if (denominator_ == 0) throw Division_by_zero_exception("Деление на ноль невозможно. Замените пожалуйста дробь!");

		reduction(numerator_, denominator_);
	}

	Fraction operator+(Fraction frac)
	{
		int numerator = numerator_ * frac.denominator_ + frac.numerator_ * denominator_;
		int denominator = denominator_ * frac.denominator_;
		return Fraction(numerator, denominator);
	}

	Fraction operator-(Fraction frac)
	{
		return *this + (-frac);
	}

	Fraction operator*(Fraction frac)
	{
		int numerator = numerator_ * frac.numerator_;
		int denominator = denominator_ * frac.denominator_;

		return Fraction(numerator, denominator);
	}

	Fraction operator/(Fraction frac)
	{
		int a = numerator_;
		int b = denominator_;
		int c = frac.numerator_;
		int d = frac.denominator_;

		Fraction result(a * d, b * c);

		return result;
	}

	Fraction operator-()
	{
		return Fraction(-numerator_, denominator_);
	}

	Fraction& operator++()
	{
		*this = *this + Fraction(1, 1);
		return *this;
	}

	Fraction operator++(int) //Постфикс
	{
		Fraction tmp = *this;
		++(*this);
		return tmp;
	}

	Fraction& operator--()
	{
		*this = *this - Fraction(1, 1);
		return *this;
	}

	Fraction operator--(int) //Постфикс
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
	
	
	
	try
	{

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
		Fraction f1_pre = ++f1;
		Fraction f1_post = f1++;
		Fraction f2_pre = ++f2;
		Fraction f2_post = f2++;
		Fraction f1_pre_min = --f1;
		Fraction f1_post_min = f1--;
		Fraction f2_pre_min = --f2;
		Fraction f2_post_min = f2--;
		Fraction f1_pre_multi = ++f1 * f2;
		Fraction f2_pre_multi = f1 * ++f2;
		Fraction f1_post_multi = f1++ * f2;
		Fraction f2_post_multi = f1 * f2++;
		Fraction f1_pre_min_multi = --f1 * f2;
		Fraction f2_pre_min_multi = f1 * --f2;
		Fraction f1_post_min_multi = f1-- * f2;
		Fraction f2_post_min_multi = f1 * f2--;

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
		f1_pre_multi.print();

		std::cout << "Значение дроби 1: ";
		f1_pre.print();

		std::cout << numerator1 << "/" << denominator1 << "--" << " * " << numerator2 << "/" << denominator2 << " = ";
		f1_post_min_multi.print();

		std::cout << "Значение дроби 1: ";
		f1_post_min.print();
	}
	catch (const Division_by_zero_exception& ex) { std::cout << ex.what() << std::endl; }
	catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
}
