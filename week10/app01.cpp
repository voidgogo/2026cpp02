#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
	DynamicArray da1(5);

	da1.setValue(0, 99);
	cout << da1.getValue(0) << '\n';

	return 0;
}