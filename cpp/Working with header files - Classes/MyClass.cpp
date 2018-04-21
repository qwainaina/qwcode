#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::~MyClass()
{
   cout << "Constructor in a different file: " <<endl;
}
