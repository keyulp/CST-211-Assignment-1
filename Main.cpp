/*
Assignment  :  #1

Class       :  CST 211

Author      :  Keyul Patel

File:  Exception.h

Description: This file tests the functions delared in the other files.
*/
#include <iostream>
#include "Array.h"
#include "Exception.h"

using namespace std;

int main()
{
	Array<signed int> data(3, 5);
	data[6] = 2;
	cout << data[6] << endl;
	//data[9] = 3; //Used to test a bounds too large
	//data[3] = 2; //Used to test a bounds too little
	Array<signed int> data2(4, 2);
	data2[3] = 5;
	cout << data2[3] << endl;
	data = data2; //setting them equal to one another
	cout << data[3] << endl;
	char yo;
	cin >> yo;

	return 0;
}

/*

Write Up Questions

1: Some considerations that had to be considered was making sure to delete the data in the array before starting the copy to make 
	sure the program doesn't get annoyed overwriting data.

2. They do a similiar thing in the sense that they copy data from one point to another. 
	The main difference is the fact that while the copy constructor just copies the data, the assignment operator deletes the data on the
	right side and then takes the value on the left and puts it there.

3. At the end of the constructor, i checked to see if m_array actually equalled itself. If it didn't, there would be a memory leak.

4. It's currently at O(n) because the user can make the array any size.
To improve you could ake the length static so there is a guaranteed number of values which would make it O(1).
It would become static length instead of the currently length.
*/