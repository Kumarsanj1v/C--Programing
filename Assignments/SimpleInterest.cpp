#include <iostream>
using namespace std;

int main() {

    float principle, rate, time, SI;

    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Time: ";
    cin>>time;

    SI = (principle * rate * time)/100;

    cout<<"Simple Interest: "<<SI<<endl;

    return 0;
}