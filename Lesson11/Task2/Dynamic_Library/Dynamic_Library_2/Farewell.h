#pragma once
#ifdef DYNAMICLIBRARY2_EXPORTS
#define DYNAMICLIBRARY2_API __declspec(dllexport)
#else
#define DYNAMICLIBRARY2_API __declspec(dllimport)
#endif
#include <string>

class Leaver
{
public:
	void leave(std::string name);
};
