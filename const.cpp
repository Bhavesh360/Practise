// Reviewing.cpp : Defines the entry point for the console application.
//CONST!!!!

/*
Why use const
a.) Guards against inadvertent write to the variable-- stop the wrong behavior at compile time
b.) self documenting -- telling your reader that this variable will not be changed
c.) enables compiler to do more optimization, making code tighter.-- compiler can make the code tighter and therefore faster
d.) const means the variable can be put in ROM.-- embedded c++ programmers follow this practice


e.) if you really want to change the const then you can use const cast.... but then you are breaking someones promise to not change it. :( 

*/

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	const int i = 9;
	// i = 6;

	const int *p1 = &i; // data is const , pointer is not

	cout << *p1 << endl;

	// *p1++;  //this will not work because of const

	p1++; //this willwork as pointer itself is not a const

	cout << *p1 << endl;
	int x = 10;
	int* const p2 = &x; //pointer is const , data is not;

	cout << *p2 << endl;
	// p2++; this will not work because the pointer is constant
	// *p2++; this will not work because the pointer is constant

	cout << p2 << endl;


	//now what is this?
	int const * p4 = &i;
	//this is the same as writing:
	// const int* p4 = &i; //data is const, pointer is not
	//cout << p4++ << endl;
	p4++;
	cout << *p4 << endl;




	return 0;
}