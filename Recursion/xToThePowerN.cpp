#include <iostream>
using namespace std;

int pow(int x, int n) {
    if(n==0) {
        return 1;
    }

    int halfPow = pow(x,n/2);
    int sqHalfPow = halfPow * halfPow;

    if(n % 2) {
        return x * sqHalfPow;
    }
    return sqHalfPow;
}   
int main() {

    int answer = pow(2,3);
    cout << answer << endl;
    return 0;
}