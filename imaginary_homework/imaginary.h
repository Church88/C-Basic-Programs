#pragma once
#include <iostream>
using namespace std;

class Imaginary {
	private:
		int coeff;
	public:
		Imaginary();
		Imaginary(int new_coeff);
		int get_coeff() const;
		Imaginary operator+(const Imaginary& rhs);
		Imaginary operator-(const Imaginary& rhs);
		int operator*(const Imaginary& rhs);
		Imaginary operator*(const int& rhs);
		Imaginary operator=(const int& rhs);
		bool operator==(const Imaginary& rhs);
		friend ostream& operator<<(ostream& lhs, const Imaginary& rhs);
};
