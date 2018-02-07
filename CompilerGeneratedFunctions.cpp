// Reviewing.cpp : Defines the entry point for the console application.
//CONST!!!!

/*
Comiler silently writes 4 functions if they are not explicitly declared:
1. Copy Constructor. 
2. Copy Assignment Operator. 
3. Destructor
4. Default constructor.
*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class collar {
public:

	collar(string name ="asdAS" ) { // if you just had (string name) it wouldnt work. Default constructor are theones that do not need input parameters
		std::cout << "Collar is born.\n";
	}
};
class dog {
	collar m_collar;
};

int main()
{
	dog dog1;
}