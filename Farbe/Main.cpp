#include <iostream>
#include "Farbe.h"

int main() {

	Farbe gruen = Farbe(0, 255, 0);
	Farbe blau = Farbe(0, 0, 255);
	Farbe schwarz = Farbe();


	Farbe rot = Farbe(187, 123, 5);
	Farbe test = Farbe();
	test.setYIQ(0.427f, -0.216f, 0.023f);
	
	//test.getCMY();
	//test.printAll();

	rot.getHSV();
	rot.printAll();
}