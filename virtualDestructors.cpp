
/*
Use virtual destructors in polumorphic base classes
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Dog {
	int age = 0;
	string name = "andy";
public:
	Dog() {
		age = 10;
		name = "rocky";
		cout << "DOG CREATED BIATCH! ";
	}
	virtual ~Dog() {
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
	Dog* pd = new YellowDog();// this is the same as doing this:

	Dog* yD = DogFactory::createYellowDog();
	delete pd;
	delete yD;
	return 0;
}