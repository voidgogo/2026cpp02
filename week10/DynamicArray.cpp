#include "DynamicArray.h"

DynamicArray::DynamicArray(int size)
{
	this->size = size;
	ptr = new int[size];  // 동적 할당 (heap memory)
}

DynamicArray::~DynamicArray()
{
	delete ptr;
	ptr = nullptr;
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
		throw "1000: 할당 오류. 인덱스 범위를 벗어남\n";
}

int DynamicArray::getValue(int idx) const
{
	if (idx >= 0 && idx < getSize())
		return ptr[idx];
	throw "1002: 호출 오류. 인덱스 범위를 벗어남\n";
}

