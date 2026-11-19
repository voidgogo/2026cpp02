#include <iostream>
using namespace std;

// template overloading
template <typename T>
void add(T a)
{
    cout << a << '\n';
}

template <typename T>
void add(T a, T b)
{
    cout << a << " + " << b << " = " << a+b << '\n';
}

int main()
{
    add(9);
    add(7.1, 9.8);
    return 0;
}