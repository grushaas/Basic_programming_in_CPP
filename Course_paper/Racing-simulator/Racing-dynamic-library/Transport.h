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
	std::string type; // ��� ����������
	int speed; // ��������
	int dtbr; // ����� �������� �� ������
	int duration; // ����� ������
	int time_race = 0; // ������� ������� ������������ �� �� ����� ��������� �����
	std::string name_transport; // �������� ����������

	RACINGDYNAMICLIBRARY_API Transport(std::string type, int speed, int dtbr, int duration, std::string name_transport);

public:
	virtual ~Transport() = default;

	std::string name() const;
};