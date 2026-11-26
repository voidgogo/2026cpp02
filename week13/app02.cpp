#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main()
{
    string data;

    ifstream inStrm("pokemons.txt", ios::in);  // text 읽기모드, 기본값이라 생략 가능
    if (!inStrm.is_open())
    {
        cout << "pokemons.txt을 열 수 없습니다.";
        assert(false);  // 프로그램 중단
    }
    for (int i = 1; i <= 2; i++)
    {
        inStrm >> data;
        cout << data << "  ";
    }
    inStrm.close();

    return 0;
}