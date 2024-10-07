#include <iostream>
using namespace std;

int binSearch(int arr[], int left, int right, int key) {
    if(left>right) {
        return -1;
    }
    int mid = (left + right)/2;
    cout << " left " << left << ",right " << right <<", mid = "<< mid << endl;
    if (arr[mid] == key) {
        return mid;
    }
    if (arr[mid] < key) {
       return binSearch(arr,mid+1,right,key);
    }
    else {
        return binSearch(arr,left,mid-1,key);
    }

}

int main() {
    int arr[] = {1,5,7,9,12,15,17,22,25,31,37,55};
    int key = 11;
    int left = 0;
    int right = sizeof(arr)/sizeof(int)-1;
   
    int index = binSearch(arr,left,right,key);
    cout << index << endl;
    return 0;
}