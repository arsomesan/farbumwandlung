#include <iostream>
#include "Farbe.h"

int main() {
	Farbe rot = Farbe(255, 0, 0);
	Farbe gruen = Farbe(0, 255, 0);
	Farbe blau = Farbe(0, 0, 255);
	Farbe schwarz = Farbe();
	
	Farbe kek = Farbe();

	kek.setRGB(0.0f, 1.0f, 0.0f);
	
	std::cout << kek.getGreen();
}