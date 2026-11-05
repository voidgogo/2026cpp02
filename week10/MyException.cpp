#include "MyException.h"

MyException::MyException(int ec, const char* em,const DynamicArray* ea)
	: errorCode(ec), errorMessage(em), errorAddress(ea)
{
}
