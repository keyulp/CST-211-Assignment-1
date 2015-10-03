/*
Assignment  :  #1

Class       :  CST 211

Author      :  Keyul Patel

File:  Array.h

Description: This file contains the definitions for the functions delared in the array class.
*/
#ifndef Array_h
#define Array_h

#include <iostream>
using namespace std;

template <class T>
class Array
{
public:
	Array();
	Array(int length, signed int start_index = 0);
	Array(const Array &copy);
	~Array();

	Array& operator= (const Array &rhs);
	T &operator[](int index);

	int getStartIndex();
	void setStartIndex(int start_index);
	int getLength();
	void setLength(int length);

private:
	T *m_array;
	int m_length;
	int m_start_index;
};

#include "Array.inc"

#endif