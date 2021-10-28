#include <calcLib/lib.h>

/**
 * Dodaje dwie macierze typu int
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
int **addMatrix(int **matrixA, int **matrixB, int rows, int columns) {
    int **sumMatrix = allocateIntegerMatrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return sumMatrix;
}

/**
 * Dodaje dwie macierze typu double
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
double **addMatrix(double **matrixA, double **matrixB, int rows, int columns) {
    double **sumMatrix = allocateDoubleMatrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return sumMatrix;
}

/**
 * Odejmuje dwie macierze typu int
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
int **subtractMatrix(int **matrixA, int **matrixB, int rows, int columns) {
    int **subMatrix = allocateIntegerMatrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            subMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return subMatrix;
}

/**
 * Odejmuje dwie macierze typu double
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
double **subtractMatrix(double **matrixA, double **matrixB, int rows, int columns) {
    double **subMatrix = allocateDoubleMatrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            subMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return subMatrix;
}

/**
 * Mnozy dwie macierze typu int
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rowsA liczba wierszy pierwszej macierzy
 * @param columnsA liczba kolumn pierwszej macierzy
 * @param columnsB liczba kolumn drugiej macierzy
 * @return adres macierzy wynikowej
 */
int **multiplyMatrix(int **matrixA, int **matrixB, int rowsA, int columnsA, int columnsB) {
    int **multMatrix = allocateIntegerMatrix(rowsA, columnsB);
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            multMatrix[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                multMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return multMatrix;
}

/**
 * Mnozy dwie macierze typu double
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rowsA liczba wierszy pierwszej macierzy
 * @param columnsA liczba kolumn pierwszej macierzy
 * @param columnsB liczba kolumn drugiej macierzy B
 * @return adres macierzy wynikowej
 */
double **multiplyMatrix(double **matrixA, double **matrixB, int rowsA, int columnsA, int columnsB) {
    double **multMatrix = allocateDoubleMatrix(rowsA, columnsB);
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            multMatrix[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                multMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return multMatrix;
}

/**
 * Mnozy macierz typu int przez skalar tego samego typu
 * @param matrix macierz mnozona
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @param scalar wartosc skalara
 * @return adres macierzy wynikowej
 */
int **multiplyByScalar(int **matrix, int rows, int columns, int scalar) {
    int **multScalMatrix = allocateIntegerMatrix(rows, columns);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            multScalMatrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return multScalMatrix;
}

/**
 * Mnozy macierz typu double przez skalar tego samego typu
 * @param matrix macierz mnozona
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @param scalar wartosc skalara
 * @return adres macierzy wynikowej
 */
double **multiplyByScalar(double **matrix, int rows, int columns, double scalar) {
    double **multScalMatrix = allocateDoubleMatrix(rows, columns);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            multScalMatrix[i][j] = matrix[i][j] * scalar;
        }
    }
    return multScalMatrix;
}

/**
 * Transponuje macierz typu int
 * @param matrix macierz mnozona
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
int **transpozeMatrix(int **matrix, int rows, int columns) {
    int **transposedMatrix = allocateIntegerMatrix(rows, columns);
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    return transposedMatrix;
}

/**
 * Transponuje macierz typu double
 * @param matrix macierz transponowana
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres macierzy wynikowej
 */
double **transpozeMatrix(double **matrix, int rows, int columns) {
    double **transposedMatrix = allocateDoubleMatrix(rows, columns);
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    return transposedMatrix;
}

/**
 * Poteguje macierz typu int
 * @param matrix macierz potegowana
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @param power wartosc potegi
 * @return  adres macierzy wynikowej
 */
int **powerMatrix(int **matrix, int rows, int columns, unsigned power) {
    int **poweredMatrix = allocateIntegerMatrix(rows, columns);
    int **tmp;
    cpMatrix(poweredMatrix, matrix, rows, columns);
    while (power - 1) {
        tmp = multiplyMatrix(poweredMatrix, matrix, rows, columns, columns);
        cpMatrix(poweredMatrix, tmp, rows, columns);
        deleteMatrix(tmp,rows);
        power--;
    }
    return poweredMatrix;
}

/**
 * Poteguje macierz typu double
 * @param matrix macierz potegowana
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @param power wartosc potegi
 * @return  adres macierzy wynikowej
 */
double **powerMatrix(double **matrix, int rows, int columns, unsigned power) {
    double **poweredMatrix = allocateDoubleMatrix(rows, columns);
    double **tmp;
    cpMatrix(poweredMatrix, matrix, rows, columns);
    while (power - 1) {
        tmp = multiplyMatrix(poweredMatrix, matrix, rows, columns, columns);
        cpMatrix(poweredMatrix, tmp, rows, columns);
        deleteMatrix(tmp,rows);
        power--;
    }
    return poweredMatrix;
}

/**
 * Oblicza wyznacznik macierzy typu int wykorzystujac algorytm Bareissa
 * @param matrix macierz, z ktorej obliczany jest wyznacznik
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return  wartosc wyznacznika
 */
int determinantMatrix(int **matrix, int rows, int columns) {
    int sign = 1, m;

    for (int k = 0; k < rows - 1; k++) {
        //dla matrix[k][k] == 0 zamieniamy wiersze i zmieniamy znak na przeciwny
        if (matrix[k][k] == 0) {
            m = 0;
            for (m = k + 1; m < rows; m++) {
                if (matrix[m][k] != 0) {
                    for (int j = k; j < rows; j++) H::swap(matrix[m][j], matrix[k][j]);
                    sign = -sign;
                    break;
                }
            }
            //w przypadku braku niezerowego wyrazu wyznacznik = 0
            if (m == rows) {
                return 0;
            }
        }
        for (int i = k + 1; i < rows; i++) {
            for (int j = k + 1; j < rows; j++) {
                matrix[i][j] = matrix[k][k] * matrix[i][j] - matrix[i][k] * matrix[k][j];
                if (k != 0) {
                    matrix[i][j] /= matrix[k - 1][k - 1];
                }
            }
        }
    }

    return sign * matrix[rows - 1][rows - 1];
}

/**
 * Oblicza wyznacznik z macierzy typu double wykorzystujac algorytm Bareissa
 * @param matrix macierz, z ktorej obliczany jest wyznacznik
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return wartosc wyznacznika
 */
double determinantMatrix(double **matrix, int rows, int columns) {
    double sign = 1;

    for (int k = 0; k < rows - 1; k++) {
        //dla matrix[k][k] == 0 zamieniamy wiersze i zmieniamy znak na przeciwny
        if (matrix[k][k] == 0) {
            int m = 0;
            for (m = k + 1; m < rows; m++) {
                if (matrix[m][k] != 0) {
                    for (int j = k; j < rows; j++) H::swap(matrix[m][j], matrix[k][j]);
                    sign = -sign;
                    break;
                }
            }
            //w przypadku braku niezerowego wyrazu wyznacznik = 0
            if (m == rows) {
                return 0;
            }
        }
        for (int i = k + 1; i < rows; i++) {
            for (int j = k + 1; j < rows; j++) {
                matrix[i][j] = matrix[k][k] * matrix[i][j] - matrix[i][k] * matrix[k][j];
                if (k != 0) {
                    matrix[i][j] /= matrix[k - 1][k - 1];
                }
            }
        }
    }
    return sign * matrix[rows - 1][rows - 1];
}

/**
 * Sprawdza, czy macierz typu int jest diagonalna
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return true - macierz jest diagonalna, false - macierz nie jest diagonalna
 */
bool matrixIsDiagonal(int **matrix, int rows, int columns) {
    bool isDiagonal = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i == j) {
                if (matrix[i][j] == 0)
                    isDiagonal = false;
            } else {
                if (matrix[i][j] != 0)
                    isDiagonal = false;
            }
        }
    }
    return isDiagonal;
}

/**
 * Sprawdza, czy macierz typu double jest diagonalna
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return true - macierz jest diagonalna, false - macierz nie jest diagonalna
 */
bool matrixIsDiagonal(double **matrix, int rows, int columns) {
    bool isDiagonal = true;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (i == j) {
                if (matrix[i][j] == 0)
                    isDiagonal = false;
            } else {
                if (matrix[i][j] != 0)
                    isDiagonal = false;
            }
        }
    }
    return isDiagonal;
}
// error z std::swap
namespace H {
    /**
     * Zamienia wartosc dwoch zmiennych typu int poprzez referencje
     * @param a pierwsza zmienna
     * @param b druga zmienna
     */
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    /**
     * Zamienia wartosc dwoch zmiennych typu double poprzez referencje
     * @param a pierwsza zmienna
     * @param b druga zmienna
     */
    void swap(double &a, double &b) {
        double temp = a;
        a = b;
        b = temp;
    }
}

/**
 * Sortuje liczby poprzez bubble sort w wierszu macierzy typu int
 * @param tab wiersz macierzy
 * @param columns liczba kolumn
 */
void sortRow(int *tab, int columns) {
    for (int j = 0; j < columns - 1; j++)
        for (int i = 0; i < columns - 1; i++)
            if (tab[i] > tab[i + 1]) H::swap(tab[i], tab[i + 1]);
}

/**
 * Sortuje liczby poprzez bubble sort w wierszu macierzy typu double
 * @param row wiersz macierzy
 * @param columns liczba kolumn
 */
void sortRow(double *row, int columns) {
    for (int j = 0; j < columns - 1; j++)
        for (int i = 0; i < columns - 1; i++)
            if (row[i] > row[i + 1]) H::swap(row[i], row[i + 1]);
}

/**
 * Sortuje wszystkie wiersze macierzy typu int poprzez funkcje sortRow
 * @param matrix macierz sortowana
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void sortRowsInMatrix(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        sortRow(matrix[i], columns);
    }
}

/**
 * Sortuje wszystkie wiersze macierzy typu double poprzez funkcje sortRow
 * @param matrix macierz sortowana
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void sortRowsInMatrix(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        sortRow(matrix[i], columns);
    }
}

/**
 * Alokuje pamiec dla macierzy typu int o podanych wymiarach macierzy
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres zaalokowanej macierzy
 */
int **allocateIntegerMatrix(int rows, int columns) {
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[columns];
    return matrix;
}

/**
 * Alokuje pamiec dla macierzy tylu double o podanych wymiarach macierzy
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return  adres zaalokowanej macierzy
 */
double **allocateDoubleMatrix(int rows, int columns) {
    double **matrix = new double *[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new double[columns];
    return matrix;
}

/**
 * Kopiuje wartosci pierwszej macierzy typu int do drugiej macierzy tego samego typu
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void cpMatrix(int **matrixA, int **matrixB, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrixA[i][j] = matrixB[i][j];
        }
    }
}

/**
 * Kopiuje wartosci pierwszej macierzy typu double do drugiej macierzy tego samego typu
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void cpMatrix(double **matrixA, double **matrixB, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            matrixA[i][j] = matrixB[i][j];
        }
    }
}
/**
 * Zwalnia pamiec dla zaalokowanej macierzy typu int
 * @param matrix macierz
 * @param rows liczba wierszy
 */
void deleteMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
/**
 * Zwalnia pamiec zaalokowanej macierzy typu double
 * @param matrix macierz
 * @param rows liczba wierszy
 */
void deleteMatrix(double **matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
