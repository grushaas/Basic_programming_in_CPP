#pragma once
#include <stdexcept>

class Division_by_zero_exception : public std::invalid_argument
{
public:
	Division_by_zero_exception(std::string const& message);
};