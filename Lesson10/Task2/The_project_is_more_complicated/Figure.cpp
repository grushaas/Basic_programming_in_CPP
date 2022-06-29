#include "Figure.h"
#include <iostream>
#include <string>

void Figure::print()
{
    std::cout << name << ":" << std::endl;
    std::cout << "Sides: ";
    print_sides();
    std::cout << std::endl;
    std::cout << "Angles: ";
    print_angles();
}

Figure::Figure(std::string name)
{
    this->name = name;
}

void Figure::print_sides()
{

}

void Figure::print_angles()
{

}