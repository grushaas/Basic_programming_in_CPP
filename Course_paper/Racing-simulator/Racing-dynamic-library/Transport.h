#pragma once
#include <string>

class Transport
{
public:
	Transport();
	std::string type; // ��� ����������
	int speed; // ��������
	int dtbr; // ����� �������� �� ������
	int duration; // ����� ������
	int time_race; // ������� ������� ������������ �� �� ����� ��������� �����
protected:
	

	Transport(std::string type, int speed, int dtbr, int duration);

	virtual ~Transport() = default;
};