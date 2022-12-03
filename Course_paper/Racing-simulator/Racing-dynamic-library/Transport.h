#pragma once
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

	Transport(std::string type, int speed, int dtbr, int duration, std::string name_transport);

public:
	virtual ~Transport() = default;

	std::string name() const;
};