#ifndef _FARBE_H_
#define _FARBE_H_

class Farbe {

	float color[3];
	int type;
	//rgb = 1;
	//cmy = 2;
	//hsv = 3;
	//yiq = 4;

public:
	Farbe();
	Farbe(int r, int g, int b);
	void setRGB(unsigned char r, unsigned char g, unsigned char b);
	void setRGB(float r, float g, float b);
	void setCMY(unsigned char c, unsigned char m, unsigned char y);
	void setCMY(float c, float m, float y);
	void setHMV(unsigned char h, unsigned char m, unsigned char v);
	void setHMV(float h, float s, float v);
	void setYIQ(unsigned char y, unsigned char i, unsigned char q);
	void setYIQ(float y, float i, float q);
	
private:


	

};

#endif _FARBE_H_