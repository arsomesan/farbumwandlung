#include <iostream>
#include "Farbe.h"


Farbe::Farbe() {
	color[0] = 0;
	color[1] = 0;
	color[2] = 0;
	type = 1;
}


Farbe::Farbe(int r, int g, int b) {
	color[0] = (float)r;
	color[1] = (float)g;
	color[2] = (float)b;
	type = 1;
}


void Farbe::setRGB(unsigned char r, unsigned char g, unsigned char b) {

	color[0] = (float)r;
	color[1] = (float)g;
	color[2] = (float)b;
	type = 1;
}

void Farbe::setRGB(float r, float g, float b) {
	color[0] = r;
	color[1] = g;
	color[2] = b;
	type = 1;
}

void Farbe::setCMY(unsigned char c, unsigned char m, unsigned char y) {
	color[0] = (float)c;
	color[1] = (float)m;
	color[2] = (float)y;
	type = 2;
}

void Farbe::setCMY(float c, float m, float y) {
	color[0] = c;
	color[1] = m;
	color[2] = y;
	type = 2;
}

void Farbe::setHMV(unsigned char h, unsigned char m, unsigned char v) {
	color[0] = (float)h;
	color[1] = (float)m;
	color[2] = (float)v;
	type = 3;
}
void Farbe::setHMV(float h, float s, float v) {
	color[0] = h;
	color[1] = s;
	color[2] = v;
	type = 3;

}

void Farbe::setYIQ(unsigned char y, unsigned char i, unsigned char q) {
	color[0] = (float)y;
	color[1] = (float)i;
	color[2] = (float)q;
	type = 4;
}
void Farbe::setYIQ(float y, float i, float q) {
	color[0] = y;
	color[1] = i;
	color[2] = q;
	type = 4;
}

