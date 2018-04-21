#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Person
{
    int age;
    string fullname;
}John,Kimolo;

int main()

{

 cout << "John Enter your full name please: "<<endl;
 getline(cin,John.fullname);

 cout << "John Enter your age please: "<<endl;
 cin >> John.age;
 cin.ignore();

 cout << "Kimolo Enter your full name please: "<<endl;
getline(cin,Kimolo.fullname);

 cout << "Kimolo Enter your age please: "<<endl;
 cin >> Kimolo.age;
 cin.ignore();

 cout << "Person 1 is "<<John.fullname<<" and is "<<John.age<<" years old"<<endl;
 cout << "Person 2 is "<<Kimolo.fullname<<" and is "<<Kimolo.age<<" years old"<<endl;

}
