#include <iostream>
#include <vector>
using namespace std;

void merge(int array[], int si, int mid, int ei) {
    int i = si;
    int j = mid+1;
    vector <int> vec;
    
    while(i<= mid && j<= ei) {
        if (array[i] < array[j])
            vec.push_back(array[i++]);
        else
            vec.push_back(array[j++]);
    }
    while(i<=mid)
        vec.push_back(array[i++]);
    while(j<=ei)
        vec.push_back(array[j++]);

    for(int idx = si,i=0; idx<=ei; idx++,i++) {
        array[idx] = vec[i];
    }

}

void print(int array[]) {
    for(int i = 0; i<6; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void mergesort(int array[], int si, int ei){
    if(si >= ei) {
        return;
    }

    int mid = si + (ei - si)/2;
    mergesort(array, si,mid);
    mergesort(array,mid+1, ei);

    merge(array, si, mid, ei);

}

int main() {
    int array[] = {5,4,7,2,8,1};
    print(array);
    mergesort(array, 0, 5);
    print(array);
    return 0;
}