#include <iostream>
using namespace std;

char nextAlpha(char ch)
{
    if(ch == 'z')
    return 'a';
    if(ch =='Z')
    return 'A';
    return ch+1;
}
int main()
{
    
    char ch;
    char next;
    cout<<"Enter an alphabet: ";
    cin>>ch;
    next = nextAlpha(ch);

    cout<<"Next Alphabet: "<<next<<endl;
    return 0;
}