#include "PhoneBook.h"
#include <cstring>

/*
* Возвращает ссылку на поользователя из телефонной книги
*/
Subscriber* PhoneBook::getName(int id) {
	return array[id];
}

/*
* Добавляет пользователя в телефонную книгу
*/
void PhoneBook::addName() {
	char* name = new char[255];
	cout << "Введите имя - " << endl;
	cin >> name;

	char* firstName = new char[255];
	cout << "Введите фамилию - " << endl;
	cin >> firstName;
	strcpy_s(firstName, 20, firstName);

	char* patronymic = new char[255];
	cout << "Введите отчество - " << endl;
	cin >> patronymic;
	strcpy_s(patronymic, 20, patronymic);

	long homePhoneNumber;
	cout << "Введите домашний номер телефона - " << endl;
	cin >> homePhoneNumber;

	long workPhoneNumber;
	cout << "Введите рабочий номер телефона - " << endl;
	cin >> workPhoneNumber;

	long mobilePhoneNumber;
	cout << "Введите сотовый номер телефона - " << endl;
	cin >> mobilePhoneNumber;

	char* additionally = new char[255];
	cout << "Введите дополнительную информацию - " << endl;
	cin >> additionally;

	array[id++] = new Subscriber("Ivan0", "Ivanov0", "Ivanovich0", 2741712, 2745962, 927947, "Информация");
	array[id++] = new Subscriber(name, firstName, patronymic, homePhoneNumber, workPhoneNumber, mobilePhoneNumber, additionally);
}


/*
* Удаляет пользователя из телефонной книги
*/
void PhoneBook::deleteName(int id) {
	array[id] = nullptr;
	delete array[id];
}

/*
* Поиск пользователя в телефонной книге
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
