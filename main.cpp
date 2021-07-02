/*
Тема: Шаблоны функций

Задание.
Реализуйте шаблонные функции для поиска максимума,
минимума, сортировки массива (любым алгоритмом сортировки), двоичного поиска в массиве, замены элемента
массива на переданное значение.
 */

#include <iostream>

// Получение максимума
template <typename T>
T max(const T array[], const int& sizeArray) {
    T max = array[0];
    for (int i = 1; i < sizeArray; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

// Получение минимума
template <typename T>
T min(const T array[], const int& sizeArray) {
    T min = array[sizeArray - 1];
    for (int i = 0; i < sizeArray; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

// Сортировка массива
template <typename T>
void sort(T array[], const int& sizeArray) {
    for (int i = 0; i < sizeArray - 1; i++) {
        for (int j = i + 1; j < sizeArray; j++) {
            if (array[j] < array[i]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Поиск алгоритмом двоичного поиска
template <typename T>
int searchBinary(const T array[], const int sizeArray, const T key) {
    int index = 0, left = 0, right = sizeArray;

    while (true) {
        index = (left + right) / 2;

        if (key < array[index]) {
            right = index - 1;
        } else if (key > array[index]) {
            left = index + 1;
        } else {
            return index;
        }

        if (left > right)
            return -1;
    }
}

// Замена элемента массива на переданное значение
template <typename T>
void replace(T array[], const int sizeArray) {
    std::cout << "Input element: ";
    T elem;
    std::cin >> elem;

    std::cout << "Input index: ";
    int index;
    std::cin >> index;

    if (index < 0 || index > sizeArray - 1) {
        std::cout << "Index not found!" << std::endl;
        return;
    }

    array[index] = elem;
}

int main()
{
    setlocale(LC_ALL, "");

    int sizeArray = 5;
    int array1[sizeArray] = {5, 1, 3, 4, 2};
    double array2[sizeArray] = {1.2, 5.4, 3.7, 4.2, 2.0};
    char array3[sizeArray] = {'f', '2', 's', ';', '#'};

    std::cout << max(array1, sizeArray) << std::endl;
    std::cout << max(array2, sizeArray) << std::endl;
    std::cout << max(array3, sizeArray) << std::endl;

    std::cout << min(array1, sizeArray) << std::endl;
    std::cout << min(array2, sizeArray) << std::endl;
    std::cout << min(array3, sizeArray) << std::endl;

    sort(array1, sizeArray);
    sort(array2, sizeArray);
    sort(array3, sizeArray);

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;

    std::cout << searchBinary(array1, sizeArray, 4) << std::endl;
    std::cout << searchBinary(array2, sizeArray, 3.7) << std::endl;
    std::cout << searchBinary(array3, sizeArray, 'j') << std::endl;

    replace(array1, sizeArray);
    replace(array2, sizeArray);
    replace(array3, sizeArray);

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeArray; i++) {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;
}
