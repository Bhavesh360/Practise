/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    const int i = 9;
    // i = 6;
    
    const int *p1 = &i; // data is const , pointer is not
    
    cout<<*p1 << endl;
    
    // *p1++;  //this will not work because of const
    
    p1++; //this willwork as pointer itself is not a const
    
    cout<< *p1 <<endl;
    

    return 0;
}



