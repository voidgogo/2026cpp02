#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	//Pokemon() { cout << "포켓몬 기본 생성자\n"; }
	virtual ~Pokemon(){ cout << "포켓몬 객체 소멸\n"; }
	virtual void attack() const { cout << "포켓몬 몸통박치기" << endl; }
};
class Pikachu : public Pokemon
{
public:
	//Pikachu() { cout << "피카츄 기본 생성자\n"; }
	~Pikachu() { cout << "피카츄 객체 소멸\n"; }
	void attack() const { cout << "피카츄 10만 볼트" << endl; }
};
int main()
{
	Pokemon* ptr;
	ptr = new Pokemon();
	ptr->attack();
	delete ptr;
	ptr = nullptr;

	ptr = new Pikachu();
	ptr->attack();
	delete ptr;
	ptr = nullptr;
	return 0;
}