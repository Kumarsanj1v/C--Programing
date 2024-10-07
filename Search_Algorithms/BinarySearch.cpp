#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int start =0;
    int end = n-1;
    int mid = (start + end)/2;

    for(int i=0; i<n; i++) {
        if(key == arr[mid])    
            return mid;
        if(key > arr[mid])
            start = ++mid;
            else
            end = --mid;
    
    }
    return -1;

}
int main() {
    int array[] = {1,3,5,7,12,15,23,27,54,67};
    int n = sizeof(array)/sizeof(int);
    int key = 67;
    int index = BinarySearch(array, n, key);
    cout <<"Index = "<< index << endl;

    return 0;
}