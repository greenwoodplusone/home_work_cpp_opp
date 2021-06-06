#include "Subscriber.h"


/*
* Выводит информацию о пользователе
*/
void Subscriber::printSubscriber() {
	cout << "Имя - " << Subscriber::name <<
		 ",\nфамилия - " << Subscriber::firstName <<
		 ",\nотчество - " << Subscriber::patronymic <<
		 ",\nдомашний номер телефона - " << Subscriber::homePhoneNumber <<
		 ",\nрабочий номер телефона - " << Subscriber::workPhoneNumber <<
		 ",\nсотовый номер телефона - " << Subscriber::mobilePhoneNumber;
	if (additionally == NULL) {
		cout << "." << endl;
	}
	else {
		cout << ",\nдополнительно - " << additionally << "." << endl;
	}
}