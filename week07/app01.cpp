#include <iostream>
using namespace std;

class Complex {
private:
	int real;  // 실수부
	int imaginary;  // 허수부
public:
	//Complex() {
	//	real = 0;
	//	imaginary = 0;
	//}	 
	Complex() : real(0), imaginary(0){
	}

	//Complex(int real, int imaginary) {
	//	this->real = real;
	//	this->imaginary = imaginary;
	//}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary){
	}

	int getReal() const {
		return real;
	}
	int getImaginary() const {
		return imaginary;
	}
};

int main() {
	Complex c1(7, 2);
	cout << c1.getReal() << "+" << c1.getImaginary() << "i\n";
	return 0;
}