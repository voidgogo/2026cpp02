#include <new>
#include <iostream>
using namespace std;

int main()
{
    try
    {
        //int* a = new int[0xfffffffff];  // bad allocation
        //int* a = new int[0x1ffffffff];  // 
        int* a = new int[0xffffffff];  // 할당 후 종료
        delete[] a;
        cout << "종료\n";
    }
    catch (bad_alloc ex)
    {
        cout << ex.what() << '\n';
    }
    
    return 0;
}