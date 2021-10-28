#include <iostream>
#include <calcLib/lib.h>

using namespace std;

string matrixCalcInstruction[] = {"Kalkulator macierzy",
                 "matrixApp [nazwa dzialania]",
                 "Dzialania: ",
                 "addMatrix - dodawanie dwoch macierzy",
                 "subtractMatrix - odejmowanie dwoch macierzy",
                 "multiplyMatrix - mnozenie dwoch macierzy",
                 "multiplyByScalar - mnozenie macierzy przez skalar",
                 "transpozeMatrix - transponowanie macierzy",
                 "powerMatrix - potegowanie macierzy",
                 "determinantMatrix - obliczanie wyznacznika macierzy",
                 "matrixIsDiagonal - sprawdzenie, czy macierz jest diagonalna",
                 "sortRowsInMatrix - sortowanie kazdego wiersza macierzy"
};

void badInput();

void readMatrixSize(int &, int &);

void readMatrixElements(int **, int, int );

void readMatrixElements(double **, int , int);

void typeChoice(bool &);

void printResult(int **, int , int );

void printResult(double **, int , int );

void printHelp();

int main(int argc, char *argv[]) {
    string choice;

    int rowsA, columnsA, rowsB, columnsB, scalarInt, **iMatrixA, **iMatrixB , **iResultMatrix;

    double **dbMatrixA, **dbMatrixB, **dbResultMatrix, scalarDouble;

    bool isDouble = false;
    unsigned power;

    if (argc == 2) {
        choice = argv[1];
    } else {
        cout << "Nieprawidlowa liczba parametrow" << endl;
        printHelp();
        exit(1);
    }

    if (choice == "addMatrix" || choice == "subtractMatrix" || choice == "multiplyMatrix") {

        typeChoice(isDouble);
        cout << "\tMacierz A" << endl;
        readMatrixSize(rowsA, columnsA);
        cout << "\tMacierz B" << endl;
        readMatrixSize(rowsB, columnsB);

        if (!isDouble) {

            iMatrixA = allocateIntegerMatrix(rowsA, columnsA);
            iMatrixB = allocateIntegerMatrix(rowsB, columnsB);
            cout << "\tMacierz A" << endl;
            readMatrixElements(iMatrixA, rowsA, columnsA);
            cout << "\tMacierz B" << endl;
            readMatrixElements(iMatrixB, rowsB, columnsB);

            if (choice == "addMatrix")
                iResultMatrix = addMatrix(iMatrixA, iMatrixB, rowsA, columnsA);
            else if (choice == "subtractMatrix")
                iResultMatrix = subtractMatrix(iMatrixA, iMatrixB, rowsA, columnsA);
            else iResultMatrix = multiplyMatrix(iMatrixA, iMatrixB, rowsA, columnsA, columnsB);
            printResult(iResultMatrix, rowsA, columnsB);
            deleteMatrix(iMatrixA, rowsA);
            deleteMatrix(iMatrixB, rowsB);
            deleteMatrix(iResultMatrix, rowsA);

        } else {

            dbMatrixA = allocateDoubleMatrix(rowsA, columnsA);
            dbMatrixB = allocateDoubleMatrix(rowsB, columnsB);
            readMatrixElements(dbMatrixA, rowsA, columnsA);
            readMatrixElements(dbMatrixB, rowsB, columnsB);

            if (choice == "addMatrix")
                dbResultMatrix = addMatrix(dbMatrixA, dbMatrixB, rowsA, columnsA);
            else if (choice == "subtractMatrix")
                dbResultMatrix = subtractMatrix(dbMatrixA, dbMatrixB, rowsA, columnsA);
            else dbResultMatrix = multiplyMatrix(dbMatrixA, dbMatrixB, rowsA, columnsA, columnsB);

            printResult(dbResultMatrix, rowsA, columnsA);
            deleteMatrix(dbMatrixA, rowsA);
            deleteMatrix(dbMatrixB, rowsB);
            deleteMatrix(dbResultMatrix, rowsA);
        }
    } else if (choice == "multiplyByScalar" || choice == "transpozeMatrix" || choice == "powerMatrix") {

        typeChoice(isDouble);
        readMatrixSize(rowsA, columnsA);

        if (!isDouble) {
            iMatrixA = allocateIntegerMatrix(rowsA, columnsA);
            readMatrixElements(iMatrixA, rowsA, columnsA);

            if (choice == "multiplyByScalar") {
                cout << "Podaj wartosc skalara: " << endl;
                if(!(cin >> scalarInt)) badInput();
                iResultMatrix = multiplyByScalar(iMatrixA, rowsA, columnsA, scalarInt);
            } else if (choice == "powerMatrix") {
                cout << "Podaj wartosc potegi: " << endl;
                if(!(cin >> power)) badInput();
                iResultMatrix = powerMatrix(iMatrixA, rowsA, columnsA, power);
            } else {
                if(rowsA != columnsA)  H::swap(rowsA,columnsA);
                iResultMatrix = transpozeMatrix(iMatrixA, rowsA, columnsA);
            }

            printResult(iResultMatrix, rowsA, columnsA);
            deleteMatrix(iMatrixA, rowsA);
            deleteMatrix(iResultMatrix, rowsA);

        } else {

            dbMatrixA = allocateDoubleMatrix(rowsA, columnsA);
            readMatrixElements(dbMatrixA, rowsA, columnsA);

            if (choice == "multiplyByScalar") {
                cout << "Podaj wartosc skalara: " << endl;
                if(!(cin >> scalarDouble)) badInput();
                dbResultMatrix = multiplyByScalar(dbMatrixA, rowsA, columnsA, scalarDouble);
            } else if (choice == "powerMatrix") {
                cout << "Podaj wartosc potegi: " << endl;
                if(!(cin >> power)) badInput();
                dbResultMatrix = powerMatrix(dbMatrixA, rowsA, columnsA, power);
            } else {
                if(rowsA != columnsA)  H::swap(rowsA,columnsA);
                dbResultMatrix = transpozeMatrix(dbMatrixA, rowsA, columnsA);
            }

            printResult(dbResultMatrix, rowsA, columnsA);
            deleteMatrix(dbMatrixA, rowsA);
            deleteMatrix(dbResultMatrix, rowsA);
        }
    } else if (choice == "determinantMatrix" || choice == "matrixIsDiagonal" || choice == "sortRowsInMatrix") {

        typeChoice(isDouble);
        readMatrixSize(rowsA, columnsA);

        if (!isDouble) {
            iMatrixA = allocateIntegerMatrix(rowsA, columnsA);
            readMatrixElements(iMatrixA, rowsA, columnsA);
            if (choice == "determinantMatrix") {
                cout << "Wyznacznik macierzy wynosi: " << determinantMatrix(iMatrixA, rowsA, columnsA) << endl;
            } else if (choice == "matrixIsDiagonal") {
                if (matrixIsDiagonal(iMatrixA, rowsA, columnsA))
                    cout << "Macierz jest diagonalna" << endl;
                else cout << "Macierz nie jest diagonalna" << endl;
            } else {
                sortRowsInMatrix(iMatrixA, rowsA, columnsA);
                cout << "Posortowana macierz: " << endl;
                printResult(iMatrixA, rowsA, columnsA);
            }
            deleteMatrix(iMatrixA, rowsA);
        } else {

            dbMatrixA = allocateDoubleMatrix(rowsA, columnsA);
            readMatrixElements(dbMatrixA, rowsA, columnsA);

            if (choice == "determinantMatrix") {
                cout << "Wyznacznik macierzy wynosi: " << determinantMatrix(dbMatrixA, rowsA, columnsA) << endl;
            } else if (choice == "matrixIsDiagonal") {
                if (matrixIsDiagonal(dbMatrixA, rowsA, columnsA))
                    cout << "Macierz jest diagonalna" << endl;
                else cout << "Macierz nie jest diagonalna" << endl;
            } else {
                sortRowsInMatrix(dbMatrixA, rowsA, columnsA);
                cout << "Posortowana macierz: " << endl;
                printResult(dbMatrixA, rowsA, columnsA);
            }
            deleteMatrix(dbMatrixA, rowsA);
        }
    } else if (choice == "help") {
        printHelp();
    } else {
        cout << "Zla nazwa dzialania" << endl;
        printHelp();
    }
    return 0;
}
/**
 * Wyrzuca error
 */
void badInput(){
    cout << "Blad przy wczytywaniu wartosci" << endl;
    exit(2);
}
/**
 * Wczytuje liczbe wierszy i kolumn od uzytkownika
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixSize(int &rows, int &columns) {
    cout << "Podaj liczbe wierszy macierzy:" << endl;
    if(!(cin >> rows)) badInput();
    cout << "Podaj liczbe kolumn macierzy:" << endl;
    if(!(cin >> columns)) badInput();
}
/**
 * Wczytuje elementy macierzy typu int
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixElements(int **matrix, int rows, int columns) {
    cout << "Elementy podawane wierszami (np: 2 4 6)" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(!(cin >> matrix[i][j])) badInput();
        }
    }
}
/**
 * Wczytuje elementy macierzy typu double
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixElements(double **matrix, int rows, int columns) {
    cout << "Elementy podawane wierszami (np: 2 4 6)" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(!(cin >> matrix[i][j])) badInput();
        }
    }
}
/**
 * Zczytuje wybor uzytkownika odnosnie do typu elementow macierzy
 * @param isDouble true - elementy double, false - elementy int
 */
void typeChoice(bool &isDouble) {
    int choice;
    cout << "Wybierz opcje: " << endl;
    cout << "0 - elementy int " << endl;
    cout << "1 - elementy double " << endl;
    if(!(cin >> choice)) badInput();
    if (choice == 1) isDouble = true;
    else if (choice == 0) return;
    else badInput();
}
/**
 * Wyswietla macierz typu int
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResult(int **matrix, int rows, int columns) {
    cout << "\tWynik:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << endl;
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << "\t";
        }
    }
}
/**
 * Wyswietla macierz typu double
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResult(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        cout << endl;
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << "\t";
        }
    }
}
/**
 * Wyswietla dokumentacje
 */
void printHelp() {
    for (string &lines : matrixCalcInstruction) {
        cout << lines << endl;
    }
}