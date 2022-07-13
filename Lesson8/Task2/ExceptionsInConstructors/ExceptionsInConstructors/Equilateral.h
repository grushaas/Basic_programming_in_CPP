#pragma once
#include "Isosceles.h"
#include <string>

class Equilateral : public Isosceles
{
public:
	Equilateral(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC, std::string nameTriangle);

protected:
	void print_sides() override;

	void print_angles() override;
};
