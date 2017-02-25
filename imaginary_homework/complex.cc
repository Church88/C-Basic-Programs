#include <iostream>
#include "complex.h"
using namespace std;

//Class definition file for Complex

//YOU: Fill in all of these functions
//There are stubs (fake functions) in there now so that it will compile
//The stubs should be removed and replaced with your own code.

Complex::Complex(): real(0), imagine() {}

Complex::Complex(int new_real, Imaginary new_imagine): real(new_real), imagine(new_imagine) {}

Complex Complex::operator+(const Complex &rhs) {
	return Complex(real + rhs.real, imagine + rhs.imagine);
}
Complex Complex::operator-(const Complex &rhs) {
	return Complex(real - rhs.real, imagine - rhs.imagine);
}
Complex Complex::operator*(const Complex &rhs) {
	Imaginary temp_rhs = rhs.imagine;
	int temp_r = (real * rhs.real)+(imagine * rhs.imagine);
	Imaginary temp_i = (temp_rhs * real)+(imagine * rhs.real);
	return Complex(temp_r, temp_i);
}
bool Complex::operator==(const Complex &rhs) {
	return (real == rhs.real && imagine == rhs.imagine);
}
Complex Complex::operator^(const int &e) {
	if(e == 0) return Complex(1,0);
	int temp_r = real;
	Imaginary temp_i = imagine;
	Complex running_t(real,imagine);
	for(int i = 0; i < e-1; i ++){
		running_t = running_t * Complex(temp_r,temp_i);
	}
	return running_t;
}
ostream& operator << (ostream &lhs,const Complex& rhs) {
	lhs << rhs.real;
	lhs << showpos;
	lhs << rhs.imagine;
	lhs << noshowpos;
	return lhs;
}
istream& operator >> (istream &lhs,Complex &rhs) {
	int temp_r, temp_i;
	lhs >> temp_r >> temp_i;
	Imaginary snafu(temp_i);
	Complex fubar(temp_r,snafu);
	rhs = fubar;
	return lhs;
}
int Complex::get_real() { return real; }
