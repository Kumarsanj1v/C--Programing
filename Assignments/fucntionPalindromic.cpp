#include <iostream>
#include <string>

using namespace std;

bool isPalin(int n)
{
    int left, right;
    string str = to_string(n);
    int len = to_string(n).length();
    if(len%2 ==0)
    {
        left = len/2;
        right = left+1;
    }
    else
    {
        left =len/2;
        right = left+2;
    }
    
    for(int i =left;i>0;i--)
    {
        if(str[left-1] != str[right-1])
        return false;
        left--;
        right++;
    }
    return true;
}

int main()
{
    int num;

    cout<<"Enter a number to check if it is a Palindromic number: ";
    cin>>num;

    if(isPalin(num))
        cout<<"It's a Palindromic Number";
    else
        cout<<"It's not a Palindromic number ";
cout<<endl;
return 0;
}