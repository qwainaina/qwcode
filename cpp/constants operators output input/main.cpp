#include <iostream>
using namespace std;

//Functions
// Formula: type, name (intiallization) {
//command;
//}

int addition (int a, int b, int c) //Global Scope
{
    int adding = a+b+c;
    return (adding);
}

int main()
{
// Local scope

cout << addition(78,9,56) ;



/*
int a = 01234;
cout<<a<<endl;

float b = 1.2e345;
cout<<b<<endl;

string c = "I am learning how to code c++ \v it is great";
cout<<c<<endl;

char d='d';
cout<<d<<endl;

bool e=true;
cout<<e<<endl;
*/
}
