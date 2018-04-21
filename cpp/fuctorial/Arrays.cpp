#include <iostream>
#include <string>
using namespace std;

// Passing Values into an Array

int main()

{
string BirthdayList[5];

for (int a=1; a<5;a++)
{
    BirthdayList[a] = "Happy Birthday";
    cout<<a<<"          "<<BirthdayList[a]<<endl;
}

}
