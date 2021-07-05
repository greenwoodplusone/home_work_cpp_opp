//
// Created by greenwoodplusone on 05.07.2021.
//

#ifndef UNTITLED_MATRIX_H
#define UNTITLED_MATRIX_H

#include <iostream>

template <class T>
class Matrix {
    int sizeMatrix;
    T** matrix; // Высота матрицы = длина матрицы = размер (sizeMatrix)

public:
    Matrix(int pSizeMatrix) : sizeMatrix{pSizeMatrix} {
        matrix = new T*[pSizeMatrix];
        for (int i = 0; i < pSizeMatrix; i++) {
            matrix[i] = new T[pSizeMatrix] {0};
        }
    }

    ~Matrix() {
        /*
        for (int i = 0; i < sizeMatrix; i++) {
            matrix[i] = nullptr;
            delete[] matrix[i];
        }
        matrix = nullptr;
        delete[] matrix;
         */
    }

    Matrix() : Matrix{1} {}

    int getSizeMatrix() const {
        return sizeMatrix;
    }

    T **getMatrix() const {
        return matrix;
    }

    void setMatrix(T **matrix) {
        Matrix::matrix = matrix;
    }

    void print() {
        for (int i = 0; i < sizeMatrix; i++) {
            std::cout << "| ";
            for (int j = 0; j < sizeMatrix; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "| " << std::endl;
        }
    }

    void filling() {
        for (int i = 0; i < sizeMatrix; i++) {
            std::cout << "Input number " << i << " row:   ";
            for (int j = 0; j < sizeMatrix; j++) {
                std:: cin >> matrix[i][j];
            }
            std::cout << std::endl;
        }
    }

    T max() {
        T max = matrix[0][0];
        for (int i = 0; i < sizeMatrix; i++) {
            for (int j = 0; j < sizeMatrix; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
        return max;
    }

    T min() {
        T min = matrix[sizeMatrix - 1][sizeMatrix - 1];
        for (int i = 0; i < sizeMatrix; i++) {
            for (int j = 0; j < sizeMatrix; j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }
        return min;
    }

    // friend Matrix<T> operator+(Matrix<T> matrix1, Matrix<T> matrix2);

    Matrix<T> operator+(Matrix<T> matrix) {
        if (this->sizeMatrix != matrix.sizeMatrix) {
            std::cout << "Matrix sizes not equal" << std::endl;
            return *this;
        }

        Matrix<T> newMatrix{this->sizeMatrix};

        /*
        T** tempMatrix = new T*[newMatrix.getSizeMatrix()];
        for (int i = 0; i < newMatrix.getSizeMatrix(); i++) {
            tempMatrix[i] = new T[newMatrix.getSizeMatrix()] {0};
        }

        newMatrix.setMatrix(tempMatrix);
         */


        for (int i = 0; i < this->sizeMatrix; i++) {
            for (int j = 0; j < this->sizeMatrix; j++) {
                newMatrix.matrix[i][j] = this->matrix[i][j] + matrix.matrix[i][j];
            }
        }

        return newMatrix;
    }

    Matrix<T> operator-(Matrix<T> matrix) {
        if (this->sizeMatrix != matrix.sizeMatrix) {
            std::cout << "Matrix sizes not equal" << std::endl;
            return *this;
        }

        Matrix<T> newMatrix{this->sizeMatrix};

        /*
        T** tempMatrix = new T*[newMatrix.getSizeMatrix()];
        for (int i = 0; i < newMatrix.getSizeMatrix(); i++) {
            tempMatrix[i] = new T[newMatrix.getSizeMatrix()] {0};
        }

        newMatrix.setMatrix(tempMatrix);
         */


        for (int i = 0; i < this->sizeMatrix; i++) {
            for (int j = 0; j < this->sizeMatrix; j++) {
                newMatrix.matrix[i][j] = this->matrix[i][j] - matrix.matrix[i][j];
            }
        }

        return newMatrix;
    }

};


#endif //UNTITLED_MATRIX_H
