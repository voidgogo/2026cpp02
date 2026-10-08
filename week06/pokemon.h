#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pokemon // interface (abstract class)
{
public:
	virtual void attack() const = 0; // pure virtual function
};