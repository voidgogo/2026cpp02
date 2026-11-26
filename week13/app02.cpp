#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    ofstream ostr("dl.txt", ios::out | ios::app);  // 쓰기 및 추가
    if (!ostr.is_open())
    {
        cout << "dl.txt" << endl;
        assert(false);
    }
    ostr << "cpp2" << " ";
    ostr << "bigdata2";
    ostr.close();
    return 0;
}