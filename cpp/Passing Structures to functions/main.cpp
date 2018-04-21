//Passing Structures to Functions
//Functions can take structures as normal arguments just like variables

#include <iostream>
#include <string>
using namespace std;

struct Detail
{
    char Fullname[50];
    int Age;
    float Experience;
    string Address;
} User;

void DetailPrinter (Detail)
{
    cout << "****YOUR PERSONAL DETAILS****"<<endl;
    cout << "Your Names are: " << User.Fullname <<endl;
    cout << "Your Age is " << User.Age <<endl;
    cout << "You have an experience of " << User.Experience << " years "<<endl;
    cout << "Your Address is " << User.Address<<endl;
};


int main()
{
    Detail Detailgrabber;

    cout<< "Enter Your Fullname ";
    cin.get(User.Fullname, 50);
    cout << "Enter your Age ";
    cin >> User.Age;
    cin.ignore();
    cout<< "Enter your experience in Years ";
    cin >> User.Experience;
    cin.ignore();
    cout << "Enter your Address ";
    getline(cin,User.Address);

    DetailPrinter(Detailgrabber);

    return 0;
}
