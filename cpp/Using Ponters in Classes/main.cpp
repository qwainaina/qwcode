#include <iostream>
#include <string>
#include "MyClass.h"

using namespace std;

int main()
{
    MyClass MyObj;
    MyObj.MyFunction();

    MyClass *MyPointer = &MyObj;
    MyPointer->MyFunction();

    MyClass MyObj2;
    //MyObj2.MyFunction2("John");


    return 0;
}
