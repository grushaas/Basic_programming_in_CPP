#pragma once
#include "Figure.h"

class Parallelogram : public Figure
{
public:
	Parallelogram(int sideA, int sideB, int angleA, int angleB) : Figure("Parallelogram");

protected:
	void print_sides();

	void print_angles();

private:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};