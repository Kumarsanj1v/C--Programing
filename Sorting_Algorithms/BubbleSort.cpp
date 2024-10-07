#include <iostream>
using namespace std;

void print(int *array,int n) {
    cout<<"{";
    for(int i =0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout <<"}" << endl;
}

void bubbleSortAs(int *array, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j< n-i-1; j++ ) {
            if(array[j] > array[j+1]) {
                swap(array[j],array[j+1]);  
                }
        }
    }
}

int main() {

    int array[] = {4,2,6,1,5,1,3,2,8,6};
    int n = sizeof(array)/sizeof(int);
    
    cout <<"Array (Before Sorting performed):" ;
    print(array,n);
    
    bubbleSortAs(array,n);
    
    cout <<"Array (After Sorting performed):" ;
    print(array,n);

    return 0;
}