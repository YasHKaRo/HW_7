#include "Header.h"


complex complex::operator+(const complex& other) {

	complex sum(this->Re + other.Re, this->Im + other.Im);
	cout << sum.Re << " " << sum.Im << "i" << endl;
	return sum;
}

complex complex::operator-(const complex& other) {

	complex minus(this->Re - other.Re, this->Im - other.Im);
	cout << minus.Re << " " << minus.Im << "i" << endl;
	return minus;
}

complex complex::operator*(const complex& other) {

	complex mult(this->Re * other.Re - this->Im * other.Im, this->Re * other.Im + this->Im * other.Re);
	cout << mult.Re << " " << mult.Im << "i" << endl;
	return mult;
}

complex complex::operator/(const complex& other) {

	complex del((this->Re * other.Re + this->Im + other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)), (other.Re * this->Im - this->Re * other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)));
	cout << del.Re << " " << del.Im << "i" << endl;
	return del;

}
double modul(complex a)
{
	return sqrt(pow(a.Re, 2) + pow(a.Im, 2));
}
