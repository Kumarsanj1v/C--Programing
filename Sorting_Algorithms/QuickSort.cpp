#include <iostream>
using namespace std;

int partition(int array[], int start, int end) {
    int pivot = end;
    int temp;
    int i = start-1;
    for(int j = start; j < pivot; j++ ) {
        if(array[j] array[pivot]) {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    temp = array[i];
    array[i] = array[pivot];
    array[pivot] = temp;
    pivot = i;
    return pivot;
}

void quickSort(int array[], int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot = partition(array, start, end);
    quickSort(array,start,pivot-1);
    quickSort(array, pivot+1, end);
}
void print(int array[], int n){
    for(int i =0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {4,3,5,2,7,6,8,1};
    int start = 0;
    int size = sizeof(array)/sizeof(int);
    int end = size-1;
    print(array,size);
    cout << "Starting Index: " << start << endl;
    cout << "Ending Index: " << end << endl;
    quickSort(array,start,end);
    print(array,size);

    return 0;
}