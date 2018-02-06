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
#include <string>
using namespace std;
//const used with functions
class Dog {
	int age;
	string name;
public:
	Dog() {
		age = 3; name = "dummy";
	}
	//this function is taking input as reference so i's value will change with change in a
	void setAge(const int& a) {
		age = a;
		//a++; // now we cant do this
		cout << "printing a: " << a << endl;
	}

	void setAge(int& a) {
		age = a;
		cout << "printing non const a: " << a << endl;
	}

	//const return val
	const string&  getName() {
		return name;
	}

	//const function 
	void printDogName() const {
		cout << name << endl;
		//cannot change any memeber variables like name and age in this case
		//also a const function like this can only call const functions and no other type of functions. 
		//so getName() would now work here. 
	}

	//const function can be overloaded with a non const function. 
	void printDogName() { //this function will be called by a non const dog and the one above will be called by a const dog
		cout << "non const " << name << endl;
	}
};

int main()
{
	Dog d;
	const Dog d2;
	d.printDogName();
	d2.printDogName();

	const int i = 9;
	d.setAge(i);
	cout << i << endl;

	int nonConstI = 9;
	d.setAge(nonConstI);
	cout << nonConstI << endl;


	const string n = d.getName();
	//n = "asdsad";
	cout << n << endl;

}