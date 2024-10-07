#include <iostream>
using namespace std;

void binomial(int a, int b)
{
    int exp = (a*a) + (b*b) + (2*a*b);
    cout<<"a2 + b2 + 2ab = "<<exp<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    binomial(a,b);
    return 0;
}