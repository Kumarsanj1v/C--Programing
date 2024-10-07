#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;


    cout << "Enter a number: ";
    cin >> num;
    int i =2;

    while( i<=num) {
        int notPrime = 0;
        for(int j=2; j<=sqrt(i); j++) {
            if (i%j == 0) {
               notPrime++;
                break;
            }
        }
        if (!notPrime)
        cout << i <<" ";
        i++;
    }
    cout << endl;
    return 0;
}