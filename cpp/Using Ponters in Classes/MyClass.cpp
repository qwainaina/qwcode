#include "MyClass.h"
#include <iostream>
#include <string>

using namespace std;
MyClass::MyClass()
{
    cout << "I am a constructor " <<endl;
}

void MyClass :: MyFunction ()
{
    cout << "I am going to run " <<endl;
}

/*
string MyClass :: MyFunction2(string a)
{
   return a
}
*/
