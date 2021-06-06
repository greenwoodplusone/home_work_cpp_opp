#include <iostream>
#include "Subscriber.h"

using namespace std;

#pragma once
class PhoneBook
{
private:
	int id = 0;
	Subscriber* array[255] {nullptr};

public:
	// � ������ ������ ������������ ���������� �� ���������

	/*
	* ���������� ������ �� ������������� �� ���������� �����
	*/
	Subscriber* getName(int id);

	/*
	* ��������� ������������ � ���������� �����
	*/
	void addName();

	/*
	* ������� ������������ �� ���������� �����
	*/
	void deleteName(int id);

	~PhoneBook() {
		for (int i = 0; i <= id; i++) {
			array[i] = nullptr;
			delete array[i];
		}
		delete array;
	}

	/*
	* ����� ������������ � ���������� �����
	*/
	Subscriber* searchName(const char* name, const char* firstName);
};
