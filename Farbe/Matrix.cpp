#include <iostream>
#include "Matrix.h"

//Konstruktor
Matrix::Matrix()
{
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			k[i][u] = 0;
		}
	}
}

Matrix::Matrix(double arr[9])
{
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			k[i][u] = arr[count];
			count++;
		}
	}
}

void Matrix::show()
{
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			std::cout << k[u][i];
			std::cout << " ";
		}
		std::cout << "\n";

	}
	std::cout << "\n";
}

void Matrix::fill()
{
	int counter = 0;
	double arr[9];
	std::cout << "Bitte geben sie die Daten der Matrix an\n";
	for (int k = 0; k < 3; k++) {
		std::cout << "New Vector\n";
		for (int f = 0; f < 3; f++) {
			std::cin >> arr[counter];
			counter++;
		}
	}
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			k[i][u] = arr[count];
			count++;
		}
	}
}

void Matrix::transpose()
{
	int arr[4];
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			if (i != u && arr[i + u] != 1) {
				int hold;
				hold = k[i][u];
				k[i][u] = k[u][i];
				k[u][i] = hold;
				arr[i + u] = 1;
			}
		}
	}
}

Matrix Matrix::multiplicate(Matrix ve)
{
	double arr[9];
	transpose();
	int count = 0;
	for (int p = 0; p < 3; p++) {

		for (int u = 0; u < 3; u++) {
			double fin = 0;

			for (int j = 0; j < 3; j++) {
				double mid = 0;
				mid = k[u][j] * ve.k[p][j];
				fin = fin + mid;
			}
			arr[count] = fin;
			count++;
		}
	}
	Matrix ergeb = Matrix(arr);
	return ergeb;
}

Vektormath Matrix::multiplicate(Vektormath ve)
{
	double in[3];
	in[0] = ve.get_x();
	in[1] = ve.get_y();
	in[2] = ve.get_z();
	double arr[3];
	int count = 0;
	transpose();


	for (int u = 0; u < 3; u++) {
		double fin = 0;

		for (int j = 0; j < 3; j++) {
			double mid = 0;
			mid = k[u][j] * in[j];
			fin = fin + mid;
		}
		arr[count] = fin;
		count++;
	}

	Vektormath ergeb = Vektormath(arr[0], arr[1], arr[2]);
	return ergeb;
}
