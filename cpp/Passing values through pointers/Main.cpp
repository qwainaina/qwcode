#include <iostream>
using namespace std;

int main ()
{
    int myarray [3] [3] {{1,2,3},{4,5,6}, {7,8,9}};
    for (int row = 0; row <3; row++)
    {
        for (int Column = 0; Column < 3; Column++)
        {
            cout << myarray[row] [Column] << " ";

        }
        cout << endl;

    }
    cout << sizeof(myarray[3,3]);
}
