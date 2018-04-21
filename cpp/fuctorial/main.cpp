#include <iostream>
using namespace std;

long Myfuctorial (long a){
    if (a > 1) {
        return (a*Myfuctorial(a-1));
    }
    else
        return (1);
}

int main ()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    cout << "The fuctorial od: " << num << "is " << Myfuctorial(num);
}
