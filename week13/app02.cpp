#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main()
{
    string data;

    ifstream inStrm("pokemons.txt");
    if (!inStrm.is_open())
    {
        cout << "pokemons.txt을 열 수 없습니다.";
        assert(false);
    }
    for (int i = 1; i <= 2; i++)
    {
        inStrm >> data;
        cout << data << "  ";
    }
    inStrm.close();

    return 0;
}