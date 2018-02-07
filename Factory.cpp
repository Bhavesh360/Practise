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

class Dog {
	int age = 0;
	string name = "andy";
public:
	Dog() {
		age = 10;
		name = "rocky";
		cout << "DOG CREATED BIATCH! ";
	}
	~Dog() {
		cout << "Dog Destroyed" << endl;
	}
};


class YellowDog : public Dog {

public:
	~YellowDog() {
		cout << "Yellow dog destroyed" << endl;
	}

};

class DogFactory {
public:
	static Dog* createYellowDog() {
		return (new YellowDog());
	}
};

int main() {
	Dog* pd = DogFactory::createYellowDog();

	delete pd;

	return 0;
}