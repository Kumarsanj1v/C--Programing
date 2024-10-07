#include <iostream>
using namespace std;

bool getIthBit(int num,int k){
    return (num bitand (1<<k));
}
int setIthBit(int num, int k){
    num = num bitor (1<<k);
    return num;
}
int clearIthBit(int num, int k) {
    num = num xor (1<<k);
    return num;
}
void checkPowerOf2(int num) {
    if(!(num bitand (num-1)))
        cout << num << " is a power of 2 " << endl;
    else
        cout << num << " is not a power of 2 " << endl;
}
int updateIthBit(int num, int k) {
    if(num bitand (1<<k)) {
        num = num bitand (~(1<<k));
        cout <<"one"<< endl;
    }
    else {
        num = num bitor (1<<k);
        cout <<"Two"<< endl;
    }

    return num;

}
int countSetBits(int num) {
    int count = 0;
    for(int i=0; i<32; i++) {
        if(getIthBit(num,i))
        count++;
    }
    return count;
}
int clearLastIthBits(int num, int k) {
    num = num bitand (~0)<<k;
    return num;
}

int main() {
    int num = 37;
    int position = 5;
    bool dual = getIthBit(num,position);
    cout << dual << endl;
    num = setIthBit(num,position+1);
    cout << num << endl;
    num = clearIthBit(num,position+1);
    cout << num << endl;
    checkPowerOf2(num);
    cout <<"bit and" << (num bitand (1<<5)) << endl;
    num = updateIthBit(num,position);
    cout << num << endl;
    num = 15;
    int position1 = 2;
    int count = countSetBits(num);
    cout << count << endl;
    num = clearLastIthBits(num, position1);
    cout << num << endl;
    return 0;
}