#pragma once
#ifdef RACINGDYNAMICLIBRARY_EXPORTS
#define RACINGDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define RACINGDYNAMICLIBRARY_API __declspec(dllimport)
#endif // RACINGDYNAMICLIBRARY_EXPORTS

#include "Transport.h"
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
	std::vector<Ground_transport> Ground;
	std::vector<Air_transport> Air;

	int type_race;
	int distance;

public:
	RACINGDYNAMICLIBRARY_API void Transport_registration();
	RACINGDYNAMICLIBRARY_API void Beginning();
	RACINGDYNAMICLIBRARY_API void Ending();
	RACINGDYNAMICLIBRARY_API void Race_results();
};
