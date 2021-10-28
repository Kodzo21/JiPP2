#ifndef JIPP2_LAB_H
#define JIPP2_LAB_H


int **addMatrix(int **, int **, int, int);

double **addMatrix(double **, double **, int, int);

int **subtractMatrix(int **, int **, int, int);

double **subtractMatrix(double **, double **, int, int);

int **multiplyMatrix(int **, int **, int, int, int);

double **multiplyMatrix(double **, double **, int, int, int);

int **multiplyByScalar(int **, int, int, int);

double **multiplyByScalar(double **, int, int, double);

int **transpozeMatrix(int **, int, int);

double **transpozeMatrix(double **, int, int);

int **powerMatrix(int **, int, int, unsigned);

double **powerMatrix(double **, int, int, unsigned);

int determinantMatrix(int **, int, int);

double determinantMatrix(double **, int, int);

bool matrixIsDiagonal(int **, int, int);

bool matrixIsDiagonal(double **, int, int);

namespace H {
    void swap(int &, int &);

    void swap(double &, double &);
}

void sortRow(int *, int);

void sortRow(double *, int);

void sortRowsInMatrix(int **, int, int);

void sortRowsInMatrix(double **, int, int);

int **allocateIntegerMatrix(int, int);

double **allocateDoubleMatrix(int, int);

void cpMatrix(int **, int **, int, int);

void cpMatrix(double **, double **, int, int);

void deleteMatrix(int **, int);

void deleteMatrix(double **, int);

#endif //JIPP2_LAB_H
