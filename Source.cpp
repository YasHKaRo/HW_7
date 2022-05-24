#include "Header.h"
//Круг
void Circle::S()
{
	cout << "S = " << this->GetPI() * pow(this->R, 2) << endl;
}
void Circle::Color()
{
	cout << "RGB: " << endl;
	cout << "Red:" << this->GetRed() << "\t Green:" << this->GetGreen() << "\t Blue:" << this->GetBlue() << endl;
}
void Circle::Coordinates()
{
	int i, j;
	cout << "Введите координаты (x;y): " << endl;
	cin >> i;
	cin >> j;
	this->SetX(i);
	this->SetY(j);
	cout << "Координаты центра круга: (" << this->GetX() << ";" << this->GetY() << ")" << endl;
}

//Комплексные числа

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

	complex multiply(this->Re * other.Re - this->Im * other.Im, this->Re * other.Im + this->Im * other.Re);
	cout << multiply.Re << " " << multiply.Im << "i" << endl;
	return multiply;
}

complex complex::operator/(const complex& other) {

	complex del((this->Re * other.Re + this->Im + other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)), (other.Re * this->Im - this->Re * other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)));
	cout << del.Re << " " << del.Im << "i" << endl;
	return del;



}
//Вектор
Vector& Vector::operator+(const Vector& other) {
	this->x = this->x + other.x;
	this->y = this->y + other.y;
	return *this;
}

Vector& Vector::operator-(const Vector& other) {
	this->x = this->x - other.x;
	this->y = this->y - other.y;
	return *this;
}


