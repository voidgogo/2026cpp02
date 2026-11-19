#include <iostream>
using namespace std;

char smaller(char first, char second)
{
    //cout << (int)first << '\n';
    //cout << static_cast<int>(first) << '\n';  // modern style, c++11
    //cout << (int)second << '\n'; // old style, c style

    if (first < second)
    {
        return first;
    }
    return second;
}
int smaller(int first, int second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
double smaller(double first, double second)
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