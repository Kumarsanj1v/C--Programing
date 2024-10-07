#include <iostream>
using namespace std;

int sumOfDigits(int); //function declaration


//main function

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    int sum =  sumOfDigits(num);
    cout<<sum<<endl;
    return 0;
}


//function definition
int sumOfDigits(int n)
{
    int sum=0;
    int len = to_string(n).length();
    for(int i=len; i>=1; i--)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}