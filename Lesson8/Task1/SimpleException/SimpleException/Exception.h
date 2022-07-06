#pragma once
#include <exception>
#include <string>


class ForbiddenWordLength : public std::exception
{
public:
	ForbiddenWordLength(std::string const& message);
};