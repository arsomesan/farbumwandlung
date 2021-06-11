#ifndef _FARBE_H_
#define _FARBE_H_

class Farbe {

	unsigned char color[3];
	float color_float[3];
	int type;
	//rgb = 1;
	//cmy = 2;
	//hsv = 3;
	//yiq = 4;

public:
	//Konstruktoren
	Farbe();
	Farbe(int r, int g, int b);
	//Zugriffsmethoden
	float getRed();
	float getGreen();
	float getBlue();
	void printAll();
	//setColorFunctions
	void setRGB(unsigned char r, unsigned char g, unsigned char b);
	void setRGB(float r, float g, float b);
	void setCMY(unsigned char c, unsigned char m, unsigned char y);
	void setCMY(float c, float m, float y);
	void setHSV(unsigned char h, unsigned char s, unsigned char v);
	void setHSV(float h, float s, float v);
	void setYIQ(unsigned char y, unsigned char i, unsigned char q);
	void setYIQ(float y, float i, float q);
	//konvertieren
	void getRGB();
	void getCMY();
	//void getRGB

	
private:


	

};

#endif _FARBE_H_