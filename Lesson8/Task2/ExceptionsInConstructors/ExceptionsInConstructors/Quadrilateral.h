#pragma once
#include "Figure.h"
#include <string>

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral);

protected:
	void print_sides() override;

	void print_angles() override;

	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};
