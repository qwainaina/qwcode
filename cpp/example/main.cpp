#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

int MyFunction (int Number)
{
     Number = 1;
    for (int i = 0; i < Number; i++)
    {
       cout << rand();
       cout <<endl;
    }


}

int main()
{
    int Number;
    MyFunction(167);
}


