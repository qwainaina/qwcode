#include <iostream>
#include <string>
using namespace std;

class JohnClass {

    protected:
        string Name;
    public:
        void SetName (string x)
        {
            Name = x;
        }
};

class JohnAccess : public JohnClass
{
   public:
    string PrintName (){
    return Name;
    }
};

int main()
{
    JohnAccess JohnObj;
    JohnObj.SetName("John The Mastermind");
    cout << JohnObj.PrintName();
    return 0;
}
