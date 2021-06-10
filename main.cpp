/*
Тема: Константная функция-член, explicit конструктор.

Задание.
Разработать класс Reservoir (водоем). Класс должен обязательно иметь поле «название». Класс должен содержать:
конструктор по умолчанию, конструктор с параметрами,
при необходимости реализовать деструктор и конструктор копирования.
Добавить методы для:
1. Определения приблизительного объема (ширина*длина*максимальная глубина);
2. Определения площади водной поверхности;
3. Метод для проверки относятся ли водоемы к одному
типу (море-море; бассейн-пруд);
4. Для сравнения площади водной поверхности водоемов
одного типа;
5. Для копирования объектов;
6. Остальные методы на усмотрение разработчика (методы set и get).
Написать интерфейс для работы с классом. Реализовать
динамический массив объектов класса с возможностью
добавления, удаления объектов из массива. Реализовать
возможность записи информации об объектах массива
в текстовый файл, бинарный файл.
Используйте explicit конструктор и константные функциичлены (например, для отображения данных о водоёме и т.д.).
 */

#include <iostream>
#include <ctime>
#include "Reservoir.h"

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    Reservoir reservoir1 {"Pick", 100, 200, 15};
    reservoir1.printReservoir();
    std::cout << std::endl;

    Reservoir reservoir2 {reservoir1};
    reservoir2.printReservoir();
    std::cout << std::endl;

    Reservoir reservoir3 {1250, 1300, 30};
    reservoir3.printReservoir();
    std::cout << std::endl;

    Reservoir reservoir4 {"My", 10, 3, 2};
    reservoir4.printReservoir();
    std::cout << std::endl;

    reservoir4.areaComparison(reservoir2);
    std::cout << std::endl;

    reservoir1.areaComparison(reservoir3);
    std::cout << std::endl;

    std::cout << reservoir2.getLengthReservoir() << std::endl;
    std::cout << reservoir3.getLengthReservoir() << std::endl;

    Reservoir::arrayReservoir[0]->printReservoir();

    Reservoir::deleteReservoirOfArray(reservoir1);
    std::cout << std::endl;
    Reservoir::arrayReservoir[0]->printReservoir();
}
