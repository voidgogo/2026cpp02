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
		throw 1000;
}

int DynamicArray::getValue(int idx) const
{
	return ptr[idx];
}

