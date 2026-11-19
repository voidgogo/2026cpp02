#include <iostream>
using namespace std;

template <typename T>
T smaller(T first, T second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}

int main()
{
    cout << smaller(-11, -14) << endl;
    //cout << smaller(99, 3.14) << endl;  // error
    cout << smaller<double>(99, 3.14) << endl;  // 99 -> 99.0 activate
    return 0;
}
