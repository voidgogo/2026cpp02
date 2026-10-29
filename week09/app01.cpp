#include <iostream>
using namespace std;

class Complex {
private:
	mutable int real;
	int imaginary;
public:
	Complex() : real(0), imaginary(0) {
	}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
	}
	Complex operator++(int) {
		Complex backup(real, imaginary);
		real = real + 1;
		return backup;
	}
	Complex& operator++() {
		real++;
		return *this;
	}
	void test() const{
		real = 111;
	}
	int getReal() const {		
		return real;
	}
	int getImaginary() const {
		return imaginary;
	}
	void setReal(int real) {
		this->real = real;
	}
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
};

Complex operator+(Complex left, Complex right) {
	return Complex(left.getReal() + right.getReal(), left.getImaginary() + right.getImaginary());
}

ostream& operator<<(ostream& left, const Complex& right) {
	left << right.getReal() << "+" << right.getImaginary() << "i\n";
	return left;
}

istream& operator>>(istream& left, Complex& right) {
	int r = 0, i = 0;
	cout << "실수부 입력 : ";
	left >> r;
	cout << "허수부 입력 : ";
	left >> i;

	right.setReal(r);
	right.setImaginary(i);

	return left;
}

int main() {
	Complex c1(7, 2);
	Complex c2(2, 9);
	cout << c1;
	cout << c2;

	Complex c3 = c1 + c2;  // Complex c3 = c1.operator+(c2);
	//Complex c3 = operator+(c1, c2);
	cout << c3;

	//Complex c4 = c3++;
	Complex c4 = ++c3;
	cout << c4;
	cout << c3;

	Complex c5;
	cout << c5;
	cin >> c5;
	cout << c5;

	return 0;
}