#pragma once
#include "Triangle.h"
#include <string>

class Right : public Triangle
{
public:
	Right(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle);

protected:
	void print_sides() override;

	void print_angles() override;
};
