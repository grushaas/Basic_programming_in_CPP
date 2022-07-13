#pragma once
#include <string>
#include "Triangle.h"

class Isosceles : public Triangle
{
public:
	Isosceles(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle);

protected:
	void print_sides() override;

	void print_angles() override;
};
