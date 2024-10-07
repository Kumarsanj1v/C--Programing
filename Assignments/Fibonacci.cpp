#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    int sum1 = 1;
    for(int i =0; i<num; i++) {
        cout<<sum <<" ";
        int temp = sum;
        sum = sum + sum1;
        sum1 = temp;
    }
    cout << endl;
    return 0;
}