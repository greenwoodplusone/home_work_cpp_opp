#include <iostream>

using namespace std;

#pragma once
class Subscriber
{
private:
	const char* name;
	const char* firstName;
	const char* patronymic;
	long homePhoneNumber;
	long workPhoneNumber;
	long mobilePhoneNumber;
	const char* additionally;
	const int MAX_LENGTH_NAME = 20;

public:
	Subscriber() {};

	Subscriber(const char* name,
			   const char* firstName,
			   const char* patronymic,
			   long homePhoneNumber,
			   long workPhoneNumber,
			   long mobilePhoneNumber,
			   const char* additionally = NULL)
	{
		Subscriber::name = name;
		Subscriber::firstName = firstName;
		Subscriber::patronymic = patronymic;

		Subscriber::homePhoneNumber = homePhoneNumber;
		Subscriber::workPhoneNumber = workPhoneNumber;
		Subscriber::mobilePhoneNumber = mobilePhoneNumber;

		Subscriber::additionally = additionally;
	}

	const char* getName() {
		return Subscriber::name;
	}

	void setName(char name) {
		name = name;
	}

	const char* getFirstName() {
		return Subscriber::firstName;
	}

	void setFirstName(char firstName) {
		firstName = firstName;
	}

	const char* getPatronymic() {
		return Subscriber::patronymic;
	}

	void setPatronymic(char patronymic) {
		patronymic = patronymic;
	}

	long getHomePhoneNumber() {
		return Subscriber::homePhoneNumber;
	}

	void setHomePhoneNumber(long homePhoneNumber) {
		Subscriber::homePhoneNumber = homePhoneNumber;
	}

	long getWorkPhoneNumber() {
		return Subscriber::workPhoneNumber;
	}

	void setWorkPhoneNumber(long workPhoneNumber) {
		Subscriber::workPhoneNumber = workPhoneNumber;
	}

	long getMobilePhoneNumber() {
		return Subscriber::mobilePhoneNumber;
	}

	void setMobilePhoneNumber(long mobilePhoneNumber) {
		Subscriber::mobilePhoneNumber = mobilePhoneNumber;
	}

	const char* getAdditionally() {
		return Subscriber::additionally;
	}

	void setAdditionally(char additionally) {
		additionally = additionally;
	}

	/*
	* Выводит информацию о пользователе
	*/
	void printSubscriber();

	~Subscriber() {
		name = nullptr;
		delete name;
		firstName = nullptr;
		delete firstName;
		patronymic = nullptr;
		delete patronymic;
		additionally = nullptr;
		delete additionally;
	}
};


