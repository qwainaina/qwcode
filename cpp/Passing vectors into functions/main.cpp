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

void DisplayMyVector(vector <int> MyVector)
{
    for (int i = 0; i < MyVector.size(); i++)
    {
        cout << MyVector[i] <<endl;
    }
}

int main ()

{
    //vectors
   vector <int> MyVector (3);

   MyVector[0] = 12;
   MyVector[1] = 67;
   MyVector[2] = 89;

    MyVector.crbegin();
   DisplayMyVector(MyVector);

    return 0;
}
