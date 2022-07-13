#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrialteral);

protected:
	void print_sides() override;

	void print_angles() override;
};