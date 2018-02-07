// Reviewing.cpp : Defines the entry point for the console application.

/*
Use virtual destructors in polumorphic base classes
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void display();

class Human {
public:
	static int humanCount; ///if i have 10 objects of this class all will share the same copy of humanCount because only one copy will be created. Also these cannot be initialized in the class
						   // we have to intialize them somewhere outside the class before we start creating its objects

	Human() {
		humanCount++;
		cout << "human count = " << humanCount << endl;
	}
};


int Human::humanCount = 0; // this is how you initialzie the static variable. Dont know if there is any other way yet. 

int main()
{
	cout << Human::humanCount;
	Human anil;
	Human bhavesh;

	return 0;
}