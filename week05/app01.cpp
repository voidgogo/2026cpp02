#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	//void makeSound() { cout << "동물이 소리를 냅니다\n"; }
	virtual void makeSound() { cout << "동물이 소리를 냅니다\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "멍멍!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "냐옹~\n"; }
};

int main()
{
	Animal* p = new Animal();
	p->makeSound();
	delete p;
	p = nullptr;

	p = new Dog();
	p->makeSound();


	Dog* pd = (Dog*)p;  // Down Casting. Old C style
	pd->makeSound();

	delete p;
	p = nullptr;
	return 0;
}