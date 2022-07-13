#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram
{
public:
	Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral);

protected:
	void print_sides() override;

	void print_angles() override;
};
