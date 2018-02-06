// Reviewing.cpp : Defines the entry point for the console application.
//CONST!!!!

/*
logic constness and bitwise constness. 
During software design if logic constness is what you are striving for then you can make the memeber variables mutable.
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BigArray {
	vector<int> v;
	mutable int accessCounter;

public:
	int getItem(int index) const {
		accessCounter++; //this wouldnt by allowed unless accessCounter is made muttable
		//another way to do it is to cast away the constness of the object:
		//const_cast<BigArray*>(this)->accessCounter++;// but avoid cast as its a hacky way to make things work.
		return v[index];
	}
};

int main()
{
	BigArray b;
	//b.accessCounter = 8; also remember by default the class makes the variables private. Good practise would be to put it there explicitly. 
}