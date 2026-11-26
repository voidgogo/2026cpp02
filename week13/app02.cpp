#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    char ch;

    ifstream istr;
    ofstream ostr;

    istr.open("pokemons.txt", ios::in);
    if (!istr.is_open())
    {
        cout << "pokemons.txt을 열 수 없습니다." << endl;
        assert(false);
    }
    ostr.open("pokemonsReplica.txt", ios::out);
    if (!ostr.is_open())
    {
        cout << "pokemonsReplica.txt" << endl;
        assert(false);
    }
    
    while (istr.get(ch))
    {
        ostr.put(ch);
    }

    istr.close();
    ostr.close();
    return 0;
}