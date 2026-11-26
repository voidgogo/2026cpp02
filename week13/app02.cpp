#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;

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