#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	//Pokemon() { cout << "피카츄 기본생성자~\n"; }
	virtual ~Pokemon() { cout << "포켓몬 소멸자!\n"; }
	//void attack() const { cout << "포켓몬 몸통박치기" << endl; }
	virtual void attack() const { cout << "포켓몬 몸통박치기" << endl; }
};
class Pikachu : public Pokemon
{
public:
	//Pikachu() { cout << "피카츄 기본생성자~\n"; }
	~Pikachu() { cout << "피카츄 소멸자!\n"; }
	void attack() const { cout << "피카츄 10만 볼트" << endl; }
};
class Squirtle : public Pokemon
{
public:
	//Squirtle() { cout << "꼬부기 기본생성자~\n"; }
	~Squirtle() { cout << "꼬부기 소멸자!\n"; }
	void attack() const { cout << "꼬부기 하이드로펌프" << endl; }
};
int main()
{
	Pokemon* pokemons[4];
	
	pokemons[0] = new Squirtle();
	pokemons[1] = new Pikachu();
	pokemons[2] = new Pokemon();
	pokemons[3] = new Pokemon();

	for (int i = 0; i < 4; i++) {
		pokemons[i]->attack();
	}

	for (int i = 0; i < 4; i++) {
		delete pokemons[i];
		pokemons[i] = nullptr;
	}
	return 0;
}
