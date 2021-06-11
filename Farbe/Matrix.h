#ifndef _MATRIX_H_
#define _MATRIX_H_
#include "Vektormath.h"


class Matrix {

	double k[3][3];

public:
	Matrix();
	Matrix(double arr[9]);
	void fill();
	void show();
	void transpose();
	Matrix multiplicate(Matrix ve);
	Vektormath multiplicate(Vektormath ve);
	

};

#endif _MATRIX_H_