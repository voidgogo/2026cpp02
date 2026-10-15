#include <iostream>
using namespace std;

class Complex {
private:
	int real;  // 실수부
	int imaginary;  // 허수부
public:
	Complex() : real(0), imaginary(0){
	}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary){
	}
	Complex operator++(int) {  // 개선 버전
		Complex backup(real, imaginary);
		real = real + 1; // 증가
		return backup;
	}
	Complex& operator++() {  // 전위연산(개선, 복소수 객체 생성x)
		real++;
		return *this;
	}
	int getReal() const {
		return real;
	}
	int getImaginary() const {
		return imaginary;
	}
};

Complex operator+(Complex left, Complex right) {  // 비멤버 함수 연산자 오버로딩
	return Complex(left.getReal() + right.getReal(), left.getImaginary() + right.getImaginary());
}

ostream& operator<<(ostream& left, const Complex& right) {
	left << right.getReal() << "+" << right.getImaginary() << "i\n";
	return left;
}

int main() {
	Complex c1(7, 2);
	Complex c2(2, 9);
	cout << c1;
	cout << c2;

	Complex c3 = c1 + c2;  // Complex c3 = c1.operator+(c2);  // 멤버 함수 호출
	//Complex c3 = operator+(c1, c2);  // 비멤버 함수 호출
	cout << c3;
	
	//Complex c4 = c3++;
	Complex c4 = ++c3;
	cout << c4;
	cout << c3;  // 비멤버 함수 left ostream 객체, right Complex 객체

	return 0;
}
