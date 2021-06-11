#include <iostream>
#include "Vektormath.h"



//Konstruktor
Vektormath::Vektormath()
{
	vektor[0] = 0;
	vektor[1] = 0;
	vektor[2] = 0;
}

Vektormath::Vektormath(double x_val, double y_val, double z_val)
{
	vektor[0] = x_val;
	vektor[1] = y_val;
	vektor[2] = z_val;
}

//Methoden

void Vektormath::set_xyz(double x_val, double y_val, double z_val)
{
	vektor[0] = x_val;
	vektor[1] = y_val;
	vektor[2] = z_val;
}

void Vektormath::print()
{
	std::cout << "X: " << vektor[0] << "\n";
	std::cout << "Y: " << vektor[1] << "\n";
	std::cout << "Z: " << vektor[2] << "\n";
	std::cout << "\n";
}

double Vektormath::get_x()
{
	return vektor[0];
}

double Vektormath::get_y()
{
	return vektor[1];
}

double Vektormath::get_z()
{
	return vektor[2];
}

void Vektormath::addieren(Vektormath ve)
{
	vektor[0] += ve.vektor[0];
	vektor[1] += ve.vektor[1];
	vektor[2] += ve.vektor[2];
}

Vektormath Vektormath::operator+(Vektormath ve)
{
	double h1, h2, h3;
	h1 = vektor[0] + ve.vektor[0];
	h2 = vektor[1] + ve.vektor[1];
	h3 = vektor[2] + ve.vektor[2];

	Vektormath vektemp = Vektormath(h1, h2, h3);
	return vektemp;

}

void Vektormath::subtrahieren(Vektormath ve)
{
	vektor[0] -= ve.vektor[0];
	vektor[1] -= ve.vektor[1];			
	vektor[2] -= ve.vektor[2];
}

Vektormath Vektormath::operator-(Vektormath ve)
{
	double h1, h2, h3;
	h1 = vektor[0] - ve.vektor[0];
	h2 = vektor[1] - ve.vektor[1];
	h3 = vektor[2] - ve.vektor[2];

	Vektormath vektemp = Vektormath(h1, h2, h3);
	return vektemp;

}

double Vektormath::skalarprodukt(Vektormath ve)
{
	double h1, h2, h3;
	h1 = vektor[0] * ve.vektor[0];
	h2 = vektor[1] * ve.vektor[1];
	h3 = vektor[2] * ve.vektor[2];

	return h1 + h2 + h3;
}

void Vektormath::skalarwert(double s)
{
	vektor[0] = vektor[0] * s;
	vektor[1] = vektor[1] * s;
	vektor[2] = vektor[2] * s;

}

Vektormath Vektormath::kreuzprodukt(Vektormath ve)
{
	double h1, h2, h3;
	h1 = vektor[1] * ve.vektor[2] - ve.vektor[1] * vektor[2];
	h2 = ve.vektor[0] * vektor[2] - vektor[0] * ve.vektor[2];
	h3 = vektor[0] * ve.vektor[1] - ve.vektor[0] * vektor[1];
	Vektormath vektemp = Vektormath(h1, h2, h3);

	return vektemp;
}

double Vektormath::length()
{
	double ergeb;
	ergeb = sqrt(vektor[0] * vektor[0] + vektor[1] * vektor[1] + vektor[2] * vektor[2]);
	return ergeb;
}

void Vektormath::normieren()
{
	double l = this->length();
	this->skalarwert(1 / l);

}




