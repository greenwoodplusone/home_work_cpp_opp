/*
Тема: Шаблоны классов

Задание.
Создайте шаблонный класс матрица. Необходимо реализовать динамическое выделение памяти, очистку памяти,
заполнение матрицы с клавиатуры, заполнение случайными значениями, отображение матрицы, арифметические
операции с помощью перегруженных операторов (+, –,
*, /), поиск максимального и минимального элемента.
 */

#include "Matrix.h"

/*
template <class T>
Matrix<T> operator+(Matrix<T> matrix1, Matrix<T> matrix2) {
    if (matrix1.getSizeMatrix() != matrix2.getSizeMatrix()) {
        std::cout << "Matrix sizes not equal" << std::endl;
        return nullptr;
    }

    Matrix<T> newMatrix{matrix1.getSizeMatrix()};

    T** matrix = new T*[newMatrix.getSizeMatrix()];
    for (int i = 0; i < newMatrix.getSizeMatrix(); i++) {
        matrix[i] = new T[newMatrix.getSizeMatrix()] {0};
    }

    newMatrix.setMatrix(matrix);


    for (int i = 0; i < matrix1.getSizeMatrix(); i++) {
        for (int j = 0; j < matrix1.getSizeMatrix(); j++) {
            newMatrix.getMatrix()[i][j] = matrix1.getMatrix()[i][j] + matrix2.getMatrix()[i][j];
        }
    }

    return newMatrix;
}
 */

int main() {
    setlocale(LC_ALL, "");

    Matrix<int> matrix0;
    matrix0.print();

    Matrix<int> matrix1{3};
    matrix1.print();

    matrix1.filling();
    matrix1.print();

    std::cout << matrix1.max() << std::endl;
    std::cout << matrix1.min() << std::endl;

    Matrix<int> newMatrix1 = matrix1 + matrix1;
    newMatrix1.print();

    Matrix<int> newMatrix2 = newMatrix1 - matrix1;
    newMatrix2.print();

    return 0;
}
