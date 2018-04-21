#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct Movies
{
    string Title;
    int Year;
}Mine, Yours;

int main ()
{
    cout << "David, Enter your best Movie: ";
    getline(cin,Mine.Title);
    cout << "When was it released? " ;
    cin>> Mine.Year;

    cout << "John, Enter your best Movie: ";
    cin >>Yours.Title;
    cout << "When was it released? " ;
    cin>> Yours.Year;

cout << "David likes " << Mine.Title << " Released in " << Mine.Year << " and John likes " << Yours.Title << " Released in " << Yours.Year <<endl;

    return 0;
}
