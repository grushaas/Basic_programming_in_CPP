#pragma once
#include <string>

#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARYDYNAMIC_API __declspec(dllexport)
#elif defined (LIBRARYDYNAMIC_EXPORTS_STATIC)
#define LIBRARYDYNAMIC
#else
#define LIBRARYDYNAMIC_API __declspec(dllimport)
#endif

struct Leaver
{
	LIBRARYDYNAMIC_API void leave(std::string name);
};
