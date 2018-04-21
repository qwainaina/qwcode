#include <iostream>
using namespace std;
//Program that calculates a factorial of a number

long GetFactorial(long a)
{
    long sum=1;
    for(long i = 1;i <=a; i++)
    {
    sum=sum*i;
    }
    return (sum);
}

int main()
{
    cout<<"Please Enter a number of your choice to get your factorial number:"<<endl;
    long num;
    cin >> num;
    cout<<GetFactorial(num)<<endl;
}
