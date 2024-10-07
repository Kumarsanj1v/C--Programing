#include <iostream>
using namespace std;
void print(int *array, int n) {
    cout << "{ ";
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "}\n";
}

int countingSort(int *array, int n) {
    int maxV = INT_MIN;
    int minV = INT_MAX;
    int freq[10000] = {0};

    for(int i  =0; i < n; i++) {
        freq[array[i]]++;
        maxV = max(maxV,array[i]);
        minV = min(minV,array[i]);
    }
   for(int i=minV, j=0; i<=maxV; i++) {
        while(freq[i]>0) {
            array[j++] = i;
            freq[i]--;
       }
   }
   print(array,n);
    return 0;
}

int main() {

    int array[] = {2,1,1,3,4,2,3,3};
    int n = sizeof(array)/sizeof(int);
    cout << "Array(before sorting):"; 
    print(array,n);
    int final = countingSort(array,n);
    return 0;
}