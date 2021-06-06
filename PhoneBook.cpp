#include "PhoneBook.h"
#include <cstring>

/*
* ���������� ������ �� ������������� �� ���������� �����
*/
Subscriber* PhoneBook::getName(int id) {
	return array[id];
}

/*
* ��������� ������������ � ���������� �����
*/
void PhoneBook::addName() {
	char* name = new char[255];
	cout << "������� ��� - " << endl;
	cin >> name;

	char* firstName = new char[255];
	cout << "������� ������� - " << endl;
	cin >> firstName;
	strcpy_s(firstName, 20, firstName);

	char* patronymic = new char[255];
	cout << "������� �������� - " << endl;
	cin >> patronymic;
	strcpy_s(patronymic, 20, patronymic);

	long homePhoneNumber;
	cout << "������� �������� ����� �������� - " << endl;
	cin >> homePhoneNumber;

	long workPhoneNumber;
	cout << "������� ������� ����� �������� - " << endl;
	cin >> workPhoneNumber;

	long mobilePhoneNumber;
	cout << "������� ������� ����� �������� - " << endl;
	cin >> mobilePhoneNumber;

	char* additionally = new char[255];
	cout << "������� �������������� ���������� - " << endl;
	cin >> additionally;

	array[id++] = new Subscriber("Ivan0", "Ivanov0", "Ivanovich0", 2741712, 2745962, 927947, "����������");
	array[id++] = new Subscriber(name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally);
}


/*
* ������� ������������ �� ���������� �����
*/
void PhoneBook::deleteName(int id) {
	array[id] = nullptr;
	delete array[id];
}

/*
* ����� ������������ � ���������� �����
*/
Subscriber* PhoneBook::searchName(const char* name, const char* firstName) {
	int idSearch;
	for (int i = 0; i < id; i++) {
		const char* searchName = (*(array[i])).getName();
		const char* searchFirstName = (*(array[i])).getFirstName();
		if ((*searchName == *name) && (*searchFirstName == *firstName)) {
			return array[i];
		}
	}
	return nullptr;
}
