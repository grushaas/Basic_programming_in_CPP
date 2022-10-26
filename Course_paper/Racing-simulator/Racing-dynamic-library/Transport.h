#pragma once
#include <string>

class Transport
{
public:
	Transport();
	std::string type; // Тип транспорта
	int speed; // Скорость
	int dtbr; // Время движение до отдыха
	int duration; // Время отдыха
	int time_race; // Сколько времени понадобилось на то чтобы завершить гонку
protected:
	

	Transport(std::string type, int speed, int dtbr, int duration);

	virtual ~Transport() = default;
};