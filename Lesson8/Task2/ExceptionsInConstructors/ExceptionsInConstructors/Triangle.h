#pragma once
#include <string>
#include "Figure.h"

class Triangle : public Figure 
{
public:
	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle);

protected:
	void print_sides() override;

	void print_angles() override;

	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};