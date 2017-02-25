#include "imaginary.h"
#include <iomanip>
using namespace std;

Imaginary Imaginary::operator+(const Imaginary& rhs) {
	return Imaginary(coeff+rhs.coeff);
}
Imaginary::Imaginary(): coeff(0) {}
Imaginary::Imaginary(int new_coeff): coeff(new_coeff) {}
int Imaginary::get_coeff() const {
	return coeff;
}
Imaginary Imaginary::operator-(const Imaginary& rhs) {
	return Imaginary(coeff-rhs.coeff);
}
Imaginary Imaginary::operator*(const int& rhs) {
	return Imaginary(coeff*rhs);
}
int Imaginary::operator*(const Imaginary& rhs) {
	return -(coeff*rhs.coeff);
}
Imaginary Imaginary::operator=(const int& rhs) {
	return Imaginary(rhs);
}
bool Imaginary::operator==(const Imaginary& rhs) {
	return (coeff == rhs.coeff);
}

//This function is done for you. It will allow you to cout variables of type Imaginary.
//For example, in main you could write:
//  Imaginary foo(2);
//  cout << foo << endl;
//And this would print out "2i"
ostream& operator<<(ostream& lhs, const Imaginary& rhs) {
	lhs << showpos;
	lhs << rhs.coeff << "i"; //Will echo +4i or +0i or -3i or whatever
	lhs << noshowpos;
	return lhs;
}

