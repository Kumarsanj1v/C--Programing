#include <iostream>
#include <vector>
#include <string>
using namespace std;

void mergeString(string arr[], int sIndex,int mid, int eIndex) {
    vector<string> vec;
    int i = sIndex;
    int j = mid + 1;

    while( i<= mid && j <= eIndex) {
        if(arr[i] < arr[j]) {
            vec.push_back(arr[i++]);
        }
        else {
            vec.push_back(arr[j++]);
        }
    }
    while(i <= mid)  {
        vec.push_back(arr[i++]);
    }
    
    while(j <= eIndex)  { 
        vec.push_back(arr[j++]);
    }
    for(int index = sIndex, i=0; index <=eIndex; index++,i++)
        arr[index] = vec[i];   
    cout << endl;
}


void stringSort(string arr[], int sIndex, int eIndex) {
    if(sIndex >= eIndex) {
        return;
    }
    
    int mid = sIndex + (eIndex - sIndex)/2;

    stringSort(arr,sIndex,mid);
    stringSort(arr,mid+1,eIndex);

    mergeString(arr,sIndex,mid,eIndex);
}

void print(string arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    string arr[] = {"sun","earth","mars","mercury"};
    vector<string> vec1;
    int n = sizeof(arr) / sizeof(arr[0]);
    stringSort(arr,0,n-1);
    //print(arr,n);
    return 0;
}