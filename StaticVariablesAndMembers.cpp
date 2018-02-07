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

int main()
{
	display();
	display();
	display();

	return 0;
}

void display() {
	//int *counter = new int (0);
	static int *counter = new int(0); //static variable will only be initialized by the first function call and will be stored in the heap.
									  //subsequent calls will operate on the value assigned by the first call. 
	cout << "display function called " << ++ *counter << " times" << endl;
}