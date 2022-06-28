#pragma once
#include <stdexcept>
#include <string>

class Except : public std::domain_error
{
public:
	Except(std::string error);

	bool PassedVerification();
};
