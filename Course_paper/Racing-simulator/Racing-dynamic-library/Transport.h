#pragma once
#ifdef RACINGDYNAMICLIBRARY_EXPORTS
#define RACINGDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define RACINGDYNAMICLIBRARY_API __declspec(dllimport)
#endif // RACINGDYNAMICLIBRARY_EXPORTS

#include <string>

class Transport
{
protected:
	std::string type; // Тип транспорта
	int speed; // Скорость
	int dtbr; // Время движение до отдыха
	int duration; // Время отдыха
	int time_race = 0; // Сколько времени понадобилось на то чтобы завершить гонку
	std::string name_transport; // Название транспорта

	RACINGDYNAMICLIBRARY_API Transport(std::string type, int speed, int dtbr, int duration, std::string name_transport);

public:
	virtual ~Transport() = default;

	std::string name() const;
};