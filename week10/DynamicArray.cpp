#include "DynamicArray.h"

DynamicArray::DynamicArray(int size)
{
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
	ptr[idx] = value;
}

int DynamicArray::getValue(int idx) const
{
	return ptr[idx];
}

