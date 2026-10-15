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
	Complex operator++(int) {  // 매개변수 자리의 int 타입 키워드는 후위연산자를 의미하는 tag
		Complex backup(this->real, this->imaginary);  // 이전 상태 백업
		this->real = this->real + 1; // 증가
		return backup;
	}
	Complex operator++() {  // 전위연산
		return Complex(++this->real, this->imaginary);
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

int main() {
	Complex c1(7, 2);
	Complex c2(2, 9);
	cout << c1.getReal() << "+" << c1.getImaginary() << "i\n";
	cout << c2.getReal() << "+" << c2.getImaginary() << "i\n";

	Complex c3 = c1 + c2;  // Complex c3 = c1.operator+(c2);
	cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";
	
	//Complex c4 = c3++;
	Complex c4 = ++c3;
	cout << c4.getReal() << "+" << c4.getImaginary() << "i\n";
	cout << c3.getReal() << "+" << c3.getImaginary() << "i\n";

	return 0;
}
