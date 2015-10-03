/*
Assignment  :  #1

Class       :  CST 211

Author      :  Keyul Patel

File:  Array.inc

Description: This file contains the declarations for all the functions used in the Array.inc file.
*/

#include <iostream>
#include "Array.h"
#include "Exception.h"
using namespace std;

template <class T>
Array<T>::Array(int length, signed int start_index)
{
	if (length <= 0)
	{
		Exception("Too short");
	}
	else
	{
		m_length = length;
	}

	m_start_index = abs(start_index);

	m_array = new int[m_length];

	if (!m_array)
	{
		exit(EXIT_FAILURE);
	}
}

template <class T>
Array<T>::~Array()
{
	delete[]m_array;
}

template <class T>
Array<T> &Array<T>::operator=(const  Array &rhs) 
{
	delete[] m_array;

	m_length = rhs.m_length;

	m_start_index = abs(rhs.m_start_index);

	m_array = rhs.m_array;

	if (!m_array)
	{
		exit(EXIT_FAILURE);
	}

	return *this;
}

template <class T>
T &Array<T>::operator[](int  index)
{
	int temp_index;

	if (index < 0)
	{
		temp_index = index + m_start_index + m_start_index;
	}
	else
	{
		temp_index = index - m_start_index;
	}

	if (index < m_start_index)
	{
		Exception("Too low");
	}
	else if (index >(m_length + m_start_index))
	{
		Exception("Too high");
	}

	return m_array[temp_index];
}


template <class T>
int Array<T>::getStartIndex()
{
	return m_start_index;
}

template <class T>
void Array<T>::setStartIndex(signed int start_index)
{
	m_start_index = start_index;
}

template <class T>
int Array<T>::getLength()
{
	return m_length;
}

template <class T>
void Array<T>::setLength(int length)
{
	m_length = length;
	m_array = new int[m_length];
}