#include "Except.h"

Division_by_zero_exception::Division_by_zero_exception(std::string const& message) : std::invalid_argument(message) {}