#include <iostream>
#include "Farbe.h"

int main() {

	Farbe gruen = Farbe(0, 255, 0);
	Farbe blau = Farbe(0, 0, 255);
	Farbe schwarz = Farbe();


	Farbe rot = Farbe(187, 123, 5);
	rot.printAll();
	rot.getCMY();
	rot.printAll();
	//cmy.printAll();
	//yiq.printAll();
}