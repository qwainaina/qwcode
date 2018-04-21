
//to write a code using vector, you have to call the library --> #include <vector>
// They are type of data structure under Containers
//They can also hold a specific number of elements
/*
syntax:
    vector <datatype> VectorNaME;
*/
// One advantage of Vectors you can easily add an element to the front and the push_back
// The disadvantage with vectors is takes alot of time to add an element in the middle of the vector

#include <iostream>
#include <vector>

using namespace std;

void DisplayMyVector(vector <string> d)
{
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] <<endl;
    }
}

int main ()

{
    //vectors
   vector <string> MyVector (2);

   MyVector[0] = "Hello there ";
   MyVector[1] = "My name is Daudi ";
   MyVector[2] = "and I like programming";

   DisplayMyVector(MyVector);

    return 0;
}
