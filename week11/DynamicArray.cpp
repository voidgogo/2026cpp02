#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray(int size)
{
	this->size = size;
	ptr = new int[size];  // 동적 할당 (heap memory)
	std::cout << this << " : 객체 생성\n";
	throw MyException(3000, "메모리 오류", this);
}

DynamicArray::~DynamicArray()
{
	delete ptr;
	ptr = nullptr;
	std::cout << this << " : 객체 소멸!\n";
}

int DynamicArray::getSize() const
{
	return size;
}

void DynamicArray::setValue(int idx, int value)
{
	if (idx >= 0 && idx < getSize())
		ptr[idx] = value;
	else
		throw MyException(1000, "할당 오류. 인덱스 범위를 벗어남", this);
}

int DynamicArray::getValue(int idx) const
{
	if (idx >= 0 && idx < getSize())
		return ptr[idx];
	throw MyException(1002, "호출 오류.인덱스 범위를 벗어남", this);
}

