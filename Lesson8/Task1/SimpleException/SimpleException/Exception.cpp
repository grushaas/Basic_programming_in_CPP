#include "Exception.h"

ForbiddenWordLength::ForbiddenWordLength(std::string const& message) : std::exception(message.c_str()) {}