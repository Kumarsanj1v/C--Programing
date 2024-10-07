#include <iostream>
using namespace std;

int friendsPairingProblem(int n) {
    if(n==0 || n == 1) {
        return 1;
    }
    if(n==2) {
        return n;
    }
    return friendsPairingProblem(n-1) +((n-1) * friendsPairingProblem(n-2));
}
int main() {

    cout << friendsPairingProblem(4) << endl;
    return 0;
    
}