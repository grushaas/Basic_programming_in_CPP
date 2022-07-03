#pragma once
#ifdef DYNAMIC_LIBRARY_2_EXPORTS
#define DYNAMIC_LIBRARY_2_API __declspec(dllexport)
#else
#define DYNAMIC_LIBRARY_2_API __declspec(dllimport)
#endif
#include <string>

class Leaver
{
public:
	void leave(std::string name);
};
