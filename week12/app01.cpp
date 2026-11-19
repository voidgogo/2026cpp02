#include <iostream>
#include <cstring>
using namespace std;

template <typename U>
void printInfo(U data) {
    cout << data << '\n';
    cout << "General Template\n";
}

template<>
void printInfo<const char*>(const char* data) {
    cout << data << '\n';
    cout << "Specialization Template\n";
    cout << strlen(data) << '\n';
}

int main()
{
    printInfo(55);
    printInfo(2.71);
    printInfo("Hi C++");
    return 0;
}
