#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int> &array, vector<int> &temp, int startIndex, int mid, int endIndex) {
    int i = startIndex;
    int j = mid + 1;
    int k = startIndex;
    int inversionCount = 0;
    while(i <= mid && j <= endIndex) {
        if(array[i] <= array[j]) {
            temp[k++] = array[i++];
        }
        else {
            temp[k++] = array[j++];
            inversionCount += (mid - i + 1);
        }
    }
    while(i <= mid)
        temp[k++] = array[i++];
    while(j <= endIndex)
        temp[k++] = array[j++];
    for(int index = startIndex; index<=endIndex; index++) {
        array[index] = temp[index];
    } 
    return inversionCount;
}

int mergeSortCount(vector<int> &array, vector<int> &temp, int startIndex, int endIndex) {
    int inversionCount = 0;
   if(startIndex < endIndex) {
        int mid = (startIndex + endIndex)/2;
        
        inversionCount += mergeSortCount(array,temp, startIndex, mid);
        inversionCount += mergeSortCount(array,temp,mid+1,endIndex);

        inversionCount += mergeAndCount(array,temp,startIndex,mid,endIndex);
   }

    return inversionCount;
}


int countInversion(vector<int> &array) {
    vector<int> temp(array.size());
    return mergeSortCount(array, temp, 0, array.size()-1);
}

void print(vector<int> &array) {
    for(int value: array)
        cout << value << " ";
    cout << endl;
}

int main() {

    vector<int> array = {1,6,20,4,5};
    cout << "Before Merge Sort: ";
    print(array);
    int inversion = countInversion(array);
    cout << "After Merge Sort: ";
    print(array);
    cout << "Number of Inversion: " << inversion << endl;
    return 0;
}