#pragma once
//#include "DynamicArray.h"

class DynamicArray;   // 전방 선언
class MyException {
public:
	int errorCode;
	const char* errorMessage;
	const DynamicArray* errorAddress;

	MyException(int ec, const char* em, const DynamicArray* ea);		
};