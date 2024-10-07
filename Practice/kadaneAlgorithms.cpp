#include <iostream>
using namespace std;

int kadaneMaxArray(int *ptr, int n) {

    int currentsum = 0;
    int subMax = INT_MIN;
    for(int i=0; i<n; i++) {
        currentsum = currentsum + ptr[i];
        subMax = max(subMax,currentsum);
        if(currentsum < 0)
        currentsum=0;
    }
    return subMax;
}

int main() {

    int array[] ={2,-3,6,-5,4,2};
    int n = sizeof(array)/sizeof(int);

    int max = kadaneMaxArray(array,n);

    cout<<"maximum value of subarray: "<<max<<endl;

    return 0;
}