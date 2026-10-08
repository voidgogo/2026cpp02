#include <iostream>
#include <string>
using namespace std;

class Pokemon // interface (abstract class)
{
public:
	virtual void attack() const = 0; // pure virtual function
};
class Pikachu : public Pokemon
{
public:
	void attack() const { cout << "피카츄 10만 볼트" << endl; }
};
class Squirtle : public Pokemon
{
	void attack() const { cout << "꼬부기 하이드로펌프" << endl; }
};
int main()
{
	//Pokemon pokemon;  // 추상클래스는 객체 생성 불가. 
	Pokemon* p = new Squirtle();
	p->attack();

	delete p;
	p = nullptr;
	return 0;
}