#include <iostream>
using namespace std;
bool getIthBit(int num, int k) {
    return ((num) bitand (1<<k));
}

int main() {

    int array[] = {1,7,4,3,2,5,3,4,1,2,9,9};
    int XOR = 0;
    for (int i =0; i< sizeof(array)/sizeof(int); i++) {
        XOR = XOR xor array[i];
    }
    cout << "XOR = "<< XOR << endl;
    int num = XOR;
    int position = 0;
    while (!((num) & (1<<position))) {
         position++;
    }
    cout << "Position  = "<< position << endl;

    for(int i = 0; i< sizeof(array)/sizeof(int); i++) {

        if(getIthBit(array[i],position)) {
            cout << array[i] <<"-";
            num = num xor array[i];
        }
    }
    cout << endl;
    int a = num;
    int b = XOR xor a;
    cout << a << " "<< b << endl;
    return 0;
}