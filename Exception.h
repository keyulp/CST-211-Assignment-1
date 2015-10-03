/*
Assignment  :  #1

Class       :  CST 211

Author      :  Keyul Patel

File:  Exception.h

Description: This file contains the declarations for all the functions declared in the Exception.cpp file.
*/
#include <iostream>
#include <string>

using namespace std;
#ifndef  exceptions_H
#define  exceptions_H
class Exception
{
public:
	Exception();
	Exception(char *msg);
	Exception(const Exception &copy);
	~Exception();

	Exception &operator= (const Exception &rhs);

	const char* getMessage() { return m_msg; }
	void setMessage(char *msg);


	friend ostream &operator<<(ostream &stream, const Exception &except);

private:

	char *m_msg;
};

#endif