#include <iostream>
using namespace std;

int main ()
{
/*
    int a = 5;
    cout << &a <<endl;

    // In order, you use the *before the variable

    int *b;
    b = &a;
    cout << b */

    int v= 10;
    cout << &v <<endl;

    int *z;

     z =&v;

     int *b;
     //b =&v;

   cout<<z<<" "<<b<<endl;

    if (&b!=&z)
    {
        cout<<"Dynamic Memories are NOT equal"<<endl;

    }


}
