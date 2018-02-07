// Reviewing.cpp : Defines the entry point for the console application.
//CONST!!!!

/*
Comiler silently writes 4 functions if they are not explicitly declared:
1. Copy Constructor. 
2. Copy Assignment Operator. 
3. Destructor
4. Default constructor.


way around private destructors::



*/

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class OpenFile {
public:
	OpenFile(string filename) {
		cout << "Open a file " << filename << endl;
	}
	void destroy() {
		delete this;
	}
private:
	~OpenFile() {
		cout << "OpenFile destructed" << endl;
	}

};

int main()
{	
	//OpenFile f("bofile");
	//f.destroy(); this will not work because once the stack unwinds it deletes f again and the private destructor is supposed to be called again
	//howeber that private destructor cannot be reached from main so if we initialize it on the heap like this:
	//it should be fine.

	OpenFile*f = new OpenFile(string("Bo_file"));
	f->destroy();
}