#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    fstream fstr("pokemons.txt", ios::in | ios::out);
    if (!fstr.is_open())
    {
        cout << "intFile을 열 수 없습니다!";
        assert(false);
    }
    string a;
    fstr >> a;
    cout << a;
    fstr.clear();
    fstr.seekp(0, ios::end);
    fstr << "\nsquirtle";

    fstr.close();
    return 0;
}