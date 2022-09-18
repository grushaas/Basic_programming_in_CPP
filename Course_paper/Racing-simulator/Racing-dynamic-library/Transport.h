#pragma once
#include <string>

class Transport
{
protected:
	std::string type; // ��� ����������
	int speed; // ��������
	int dtbr; // ����� �������� �� ������
	int duration; // ����� ������
	int time_race; // ������� ������� ������������ �� �� ����� ��������� �����

	Transport(std::string type, int speed, int dtbr, int duration);

	virtual ~Transport() = default;
};