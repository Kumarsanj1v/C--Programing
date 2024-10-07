#include <iostream>
using namespace std;

int search(int array[], int startIndex, int endIndex, int targetValue) {

    if(startIndex > endIndex) 
        return -1;
    int mid = startIndex + (endIndex-startIndex)/2;
    cout << mid << endl;

    if (array[mid] == targetValue)
        return mid;

    if(array[mid] >= array[startIndex]) {
        if(targetValue >= array[startIndex] && targetValue < array[mid])
            return search(array,startIndex,mid-1,targetValue);
        else    
            return search(array,mid+1,endIndex,targetValue);
    }
    else {
        if(targetValue > array[mid] && targetValue <= array[endIndex])
            return search(array,mid+1,endIndex,targetValue);
        else
            return search(array,startIndex,mid-1,targetValue);
    }
}

int main() {
    int array[] = {4,5,6,7,0,1,2};
    int targetValue = 6;
    int size = sizeof(array)/sizeof(int);
    int startIndex = 0;
    int endIndex = size-1;
    cout << "Initial Array: ";
    for(int i=0;i<size; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << "Array Size: " << size << endl;
    cout << "Target Value: " << targetValue << endl;

    int targetIndex = search(array, startIndex, endIndex, targetValue);
    cout << "Index of the target value: " << targetIndex << endl;

    return 0;
}