/*
Assignment  :  #1

Class       :  CST 211

Author      :  Keyul Patel

File:  Array.h

Description: This file contains the definitions for all the functions declared in the Exception.h file.
*/
#include <iostream>
#include "Exception.h"

using namespace std;

Exception::Exception(char *msg)
{
	setMessage(msg);
	cout << getMessage();
}

Exception::~Exception()
{
	delete &m_msg;
}

void Exception:: setMessage(char *msg)
{
	m_msg = msg;
}