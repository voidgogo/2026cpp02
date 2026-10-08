#include "pikachu.h"
#include "squirtle.h"

int main()
{
	//Pokemon pokemon;  // Abstract Class는 객체 생성 불가. 
	Pokemon* p = new Squirtle();  // Concrete Class
	p->attack();

	delete p;
	p = nullptr;
	return 0;
}
