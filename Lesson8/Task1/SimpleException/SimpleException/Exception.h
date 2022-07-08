#pragma once
#include <exception>
#include <stdexcept>
#include <string>


class ForbiddenWordLength : public std::length_error
{
public:
	ForbiddenWordLength(std::string const& message);
};