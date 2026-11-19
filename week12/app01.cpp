#include <iostream>
using namespace std;


// function template
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
    cout << smaller('a', 'Z') << endl;
    cout << smaller(-11, -14) << endl;
    cout << smaller(2.71, 3.14) << endl;
    return 0;
}