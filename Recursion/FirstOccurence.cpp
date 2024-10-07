#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> &v1, int key, int i) {
    if(v1[i] == key ) {
        return i;
    }
    if(i == v1.size()) {
        return -1;
    }
    else {
        return firstOccur(v1,key,i+1);
    }
}


int main() {
    vector<int> v1 = {2,5,7,4,8,45,34,23,54,34,65,56,3467,5,4,7};
    int pos = firstOccur(v1,3467,0);
    cout << pos << endl;
    return 0;
}