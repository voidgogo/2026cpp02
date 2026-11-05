#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
	DynamicArray da1(5);

	try {		
		da1.setValue(0, 99);
		da1.setValue(4, -77);
		//da1.setValue(9, 3);  // exception!
		cout << da1.getValue(4) << '\n';
		cout << da1.getValue(3) << '\n';  // dummy value (초기화를 안함)
		cout << da1.getValue(9) << '\n';  // exception. 범위를 벗어남
	}
	catch (const char* errorCode) {
			cout << errorCode;
	}
	catch (int errorCode) {
		if(errorCode == 1000)
			cout << errorCode;
		else
			cout << errorCode;
	}

	return 0;
}