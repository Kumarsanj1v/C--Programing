#include <iostream>
using namespace std;

void print(int *array,int n) {
    cout<<"{";
    for(int i =0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout <<"}" << endl;
}

void insertionSort(int *array, int n) {
    for(int i = 1; i<n; i++) {
        int temp = array[i];
        int j;
        for(j=i-1; j>=0 && array[j] > temp; j--) {
            array[j+1] = array[j];
        }
        array[j+1] = temp;
    }
}

int main() {

    int array[] = {25,24,26,23,21,27};
    int n = sizeof(array)/sizeof(int);
    
    cout <<"Array (Before Sorting performed):" ;
    print(array,n);
    
    insertionSort(array,n);
    
    cout <<"Array (After Sorting performed):" ;
    print(array,n);

    return 0;
}