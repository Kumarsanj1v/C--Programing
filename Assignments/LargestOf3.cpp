#include <iostream>
using namespace std;

void largest(int a, int b, int c)
{
    int largest;
    if(a>b)
    {
        if(a>c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }else if(b>c)
    {
        largest = b;
    }
    else
    largest = c;
    cout<<largest<<" is the largest among "<<a<<", "<<b<<", "<<c<<"."<<endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    largest(a,b,c);

    return 0;
}