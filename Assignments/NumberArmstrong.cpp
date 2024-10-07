#include <iostream>

using namespace std;

int main() {

    int num;
    int copy;
    int d1,d2,d3;
    cout << "Enter a number: ";
    cin >> num;
    copy = num;
    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num;

    if (copy == d1*d1*d1 + d2*d2*d2 + d3*d3*d3)
    cout<<copy<<" is  an Armstrong number ";
    else
    cout<<copy<<" is not an Armstrong number ";

    return 0;
}