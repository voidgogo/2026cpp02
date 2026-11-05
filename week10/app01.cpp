#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
	DynamicArray da1(5);

	da1.setValue(0, 99);
	da1.setValue(4, -77);
	da1.setValue(9, 3);
	cout << da1.getValue(4) << '\n';
	cout << da1.getValue(9) << '\n';

	return 0;
}