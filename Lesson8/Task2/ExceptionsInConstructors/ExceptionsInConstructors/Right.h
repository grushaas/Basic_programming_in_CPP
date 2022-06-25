#pragma once
#include "Figure.h"

class Right : public Figure
{
public:
	Right(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);

protected:
	void print_sides() override;

	void print_angles() override;

private:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};
