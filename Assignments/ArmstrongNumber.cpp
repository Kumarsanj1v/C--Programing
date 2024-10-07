# include <iostream>
using namespace std;

int main() {

    int num;
    int d1,d2,d3;

    cout << "Enter your number : ";
    cin >> num;

    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num;

    if (num == (d1*d1*d1 + d2*d2*d2 + d3*d3*d3)) {
        cout << "Its an Armstrong Number : " << num <<endl;
    }else {
        cout << "Its not a Armstrong Number : " << num <<endl;
    }

    return 0;
}