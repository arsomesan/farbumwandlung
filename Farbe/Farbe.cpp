#include <iostream>
#include "Farbe.h"


Farbe::Farbe() {
	color[0] = 0;
	color[1] = 0;
	color[2] = 0;
	type = 1;
}


Farbe::Farbe(int r, int g, int b) {
	color[0] = (unsigned char)r;
	color[1] = (unsigned char)g;
	color[2] = (unsigned char)b;
	type = 1;
}

float Farbe::getRed() {
	return color[0];
}

float Farbe::getGreen() {
	return color[1];
}

float Farbe::getBlue() {
	return color[2];
}

void Farbe::printAll() {

	switch (type) {
		case 1:

			for (int i = 0; i < 3; i++) {
				std::cout << (int)color[i] << "\n";
			}

			break;
	

		case 2:
			for (int i = 0; i < 3; i++) {
				std::cout << color_float[i] << "\n";
			}
			break;

	}
}


void Farbe::setRGB(unsigned char r, unsigned char g, unsigned char b) {

	color[0] = r;
	color[1] = g;
	color[2] = b;
	type = 1;
}

void Farbe::setRGB(float r, float g, float b) {
	color[0] = (unsigned char)r*255;
	color[1] = (unsigned char)g*255;
	color[2] = (unsigned char)b*255;
	type = 1;
}

void Farbe::setCMY(unsigned char c, unsigned char m, unsigned char y) {
	color_float[0] = (float)c/255;
	color_float[1] = (float)m/255;
	color_float[2] = (float)y/255;
	type = 2;
}

void Farbe::setCMY(float c, float m, float y) {
	color_float[0] = c;
	color_float[1] = m;
	color_float[2] = y;
	type = 2;
}

void Farbe::setHSV(unsigned char h, unsigned char s, unsigned char v) {
	color[0] = h;
	color[1] = s;
	color[2] = v;
	type = 3;
}
void Farbe::setHSV(float h, float s, float v) {
	color[0] = (unsigned char)h*255;
	color[1] = (unsigned char)s*255;
	color[2] = (unsigned char)v*255;
	type = 3;

}

void Farbe::setYIQ(unsigned char y, unsigned char i, unsigned char q) {
	color_float[0] = (float)y/255;
	color_float[1] = (float)i/255;
	color_float[2] = (float)q/255;
	type = 4;
}
void Farbe::setYIQ(float y, float i, float q) {
	color_float[0] = y;
	color_float[1] = i;
	color_float[2] = q;
	type = 4;
}

//Konvertieren

void Farbe::getRGB() {
	switch (type) {
	case 1:
		std::cout << "Already in RGB\n";
		break;
	case 2:
		//convert cmy to rgb
		color[0] = 255 - color_float[0]*255;
		color[1] = 255 - color_float[1]*255;
		color[2] = 255 - color_float[2]*255;
		type = 1;
		break;
	case 3:
		std::cout << "Not gonna implement\n";
		break;
	case 4:
		//convert yiq to rgb
		float y = color_float[0];
		float i = color_float[1];
		float q = color_float[2];
		float ergeb[3];
		for (int i = 0; i < 3; i++) {
			ergeb[i] = color_float[i];
		}
		ergeb[0] = (y + (0.956 * i) + (0.621 * q)) * 255;
		ergeb[1] = (y + (-0.272 * i) + (-0.647 * q)) * 255;
		ergeb[2] = (y + (-1.105 * i) + (1.702 * q)) * 255;
		for(int i = 0; i < 3; i++) {
			if (color[i] < 0) color[i] = 0;
			if (color[i] > 255) color[i] = 255;
			color[i] = (unsigned char)ergeb[i];
		}
		type = 1;
		break;
	}
}

void Farbe::getCMY() {
	switch (type) {
	case 1:
		color_float[0] = 1 - color[0] / 255;
		color_float[1] = 1 - color[1] / 255;
		color_float[2] = 1 - color[2] / 255;
		type = 2;
		break;

	case 2: 
		std::cout << "Already in CMY\n";
		break;


	}
}

