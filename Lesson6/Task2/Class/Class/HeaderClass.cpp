#include "HeaderClass.h"

Counter::Counter(int number)
{
	this->number = number;
}

Counter::Counter()
{
	number = 1;
}

void Counter::increment()
{
	number += 1;
}

void Counter::decrement()
{
	number -= 1;
}

int Counter::presentValue()
{
	return number;
}
