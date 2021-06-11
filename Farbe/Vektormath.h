#ifndef _VEKTORMATH_H_
#define _VEKTORMATH_H_


class Vektormath {

	double vektor[3];

public:
	//Konstruktor
	Vektormath();
	Vektormath(double x_val, double y_val, double z_val);
	//Methoden
	void set_xyz(double x_val, double y_val, double z_val);
	double get_x();
	double get_y();
	double get_z();
	void addieren(Vektormath ve);
	void subtrahieren(Vektormath ve);
	double skalarprodukt(Vektormath ve);
	void skalarwert(double s);
	Vektormath kreuzprodukt(Vektormath ve);
	double length();
	void normieren();
	Vektormath operator+(Vektormath ve);
	Vektormath operator-(Vektormath ve);
	void print();

};

#endif _VEKTORMATH_H_