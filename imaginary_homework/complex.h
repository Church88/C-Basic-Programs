#pragma once
#include <iostream>
#include "imaginary.h"
using namespace std;

class Complex {
	private:
		int real;
		Imaginary imagine;
	public:
		Complex();
		Complex(int new_real, Imaginary new_imagine);
		Complex operator+(const Complex &rhs);
		Complex operator-(const Complex &rhs);
		Complex operator*(const Complex &rhs);
		bool operator==(const Complex &rhs);
		Complex operator^(const int &e);
		friend ostream& operator<<(ostream &lhs,const Complex& rhs);
		friend istream& operator>>(istream &lhs,Complex& rhs);
		int get_real();
};
