#pragma once

class Counter
{
private:
	int number;

public:
	Counter(int number);
	Counter();

	void increment();

	void decrement();

	int presentValue();
};
