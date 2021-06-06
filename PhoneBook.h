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
	// в данном классе используется контруктор по умолчанию

	/*
	* Возвращает ссылку на поользователя из телефонной книги
	*/
	Subscriber* getName(int id);

	/*
	* Добавляет пользователя в телефонную книгу
	*/
	void addName();

	/*
	* Удаляет пользователя из телефонной книги
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
	* Поиск пользователя в телефонной книге
	*/
	Subscriber* searchName(const char* name, const char* firstName);
};
