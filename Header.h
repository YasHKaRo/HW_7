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
double modul(complex a);
class calculator
{
public:
	int first, second;
	calculator(int valueFirst, int valueSecond)
	{
		first = valueFirst;
		second = valueSecond;
	}
	calculator()
	{
		first = 0;
		second = 0;
	}


};


#endif // !HEADER_H

