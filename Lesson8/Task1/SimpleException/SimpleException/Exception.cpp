#include "Exception.h"

ForbiddenWordLength::ForbiddenWordLength(std::string const& message) : std::length_error(message) {}