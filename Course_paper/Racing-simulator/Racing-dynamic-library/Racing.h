#pragma once
#ifdef RACINGDYNAMICLIBRARY_EXPORTS
#define RACINGDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define RACINGDYNAMICLIBRARY_API __declspec(dllimport)
#endif // RACINGDYNAMICLIBRARY_EXPORTS


#include "Ground-transport.h"
#include "Air-transport.h"
#include "Camel.h"
#include "Camel-fast.h"
#include "Centaur.h"
#include "All-terrain-boots.h"
#include "Magic-carpet.h"
#include "Eagle.h"
#include "Broomstick.h"
#include <memory>
#include <iostream>
#include <vector>

class Racing
{
private:
	static std::vector<Ground_transport> Ground;
	static std::vector<Air_transport> Air;

	static int type_race;
	static int distance;

public:
	RACINGDYNAMICLIBRARY_API static void Transport_registration();
	RACINGDYNAMICLIBRARY_API static void Beginning();
	RACINGDYNAMICLIBRARY_API static void Ending();
	RACINGDYNAMICLIBRARY_API static void Race_results();
};
