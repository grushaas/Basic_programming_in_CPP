#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);

protected:
	virtual void print_sides();

	virtual void print_angles();

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};