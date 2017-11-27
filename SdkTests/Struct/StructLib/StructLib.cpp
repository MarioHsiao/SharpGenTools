// StructLib.cpp : Defines the exported functions for the DLL application.

#include "StructLib.h"

STRUCTLIB_FUNC(SimpleStruct) GetSimpleStruct()
{
	return { 10, 3 };
}

STRUCTLIB_FUNC(IntToBoolArray) GetIntToBoolArray()
{
	return { {0, 0, 0} };
}

STRUCTLIB_FUNC(bool) And(IntToBoolArray array)
{
	return array.i[0] + array.i[1] + array.i[2];
}
