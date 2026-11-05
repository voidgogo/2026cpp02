#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
	DynamicArray da1(5);

	try {
		da1.setValue(0, 99);
		da1.setValue(4, -77);
		da1.setValue(9, 3);  // ???
		cout << da1.getValue(4) << '\n';
		//cout << da1.getValue(9) << '\n';  // ???
	}
	catch (int error) {
		cout << "할당된 메모리 공간을 벗어났습니다\n";
	}

	return 0;
}