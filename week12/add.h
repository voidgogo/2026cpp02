#pragma once
#include <iostream>
using namespace std;

// function template overloading
template <typename T>
void add(T a)
{
    cout << a << '\n';
}

template <typename T>
void add(T a, T b)
{
    cout << a << " + " << b << " = " << a + b << '\n';
}