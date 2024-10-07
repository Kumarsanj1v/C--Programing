#include <iostream>
using namespace std;

void print(int *array,int n) {
    cout<<"{";
    for(int i =0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout <<"}" << endl;
}

void selectionSort(int *array, int n) {
    for(int i=0; i < n-1; i++ ) {
    int minIndex = i;
            for(int j =i+1; j < n; j++) {
            if(array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        swap(array[i], array[minIndex]);
    }
}

int main() {

    int array[] = {3,1,2,5,6,4,7,9,8,0};
    int n = sizeof(array)/sizeof(int);
    
    cout <<"Array (Before Sorting performed):" ;
    print(array,n);
    
    selectionSort(array,n);
    
    cout <<"Array (After Sorting performed):" ;
    print(array,n);

    return 0;
}