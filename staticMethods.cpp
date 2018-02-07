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
	static int humanCount; ///if i have 10 objects of this class all will share the same copy of humanCount because only one copy will be created

	Human() {
		humanCount++;
		cout << "human count = " << humanCount << endl;
	}

	static void HumanStaticMethod() {
		//static member methods can only use static member variables. 
		cout << humanCount << "       Printint this " << endl;
	}
};


int Human::humanCount = 0;

int main()
{
	cout << Human::humanCount;
	Human anil;
	Human bhavesh;
	bhavesh.Human

	return 0;
}