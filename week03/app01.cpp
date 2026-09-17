#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	void attack() const { cout << "포켓몬 몸통박치기" << endl; }
};
class Pikachu : public Pokemon
{
public:
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