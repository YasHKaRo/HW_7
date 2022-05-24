#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class complex
{
public:
	double Re, Im;
	complex(double valueRe, double valueIm) 
	{
		Re = valueRe;
		Im = valueIm;
	}
	complex() 
	{
		Re = 0;
		Im = 0;
	};

	complex operator+(const complex& other);
	complex operator-(const complex& other);
	complex operator*(const complex& other);
	complex operator/(const complex& other);
	~complex() {
		cout << "Destructor\n";
	}

};
class Circle
{
private:
	int x;
	int y;
	int R;

	int Red = rand() % 256;
	int Green = rand() % 256;
	int Blue = rand() % 256;
public:
	const double PI = 3.1415926535;
	Circle(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		R = 10;
	}
	int GetRed()
	{
		return Red;
	}
	int GetGreen()
	{
		return Green;
	}
	int GetBlue()
	{
		return Blue;
	}
	double GetPI()
	{
		return PI;
	}


	void SetX(int x)
	{
		this->x = x;

	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void Coordinates();
	void Color();
	void S();
	~Circle() {
		cout << "Destructor\n";
	}
};
class Vector
{
public:
	Vector(Vector& other) {

		this->x = other.x;
		this->y = other.y;
	}
	Vector& operator+(const Vector& other);
	Vector& operator-(const Vector& other);
	~Vector() {
		cout << "Destructor";
	}

private:
	int x, y;
};


#endif // !HEADER_H

