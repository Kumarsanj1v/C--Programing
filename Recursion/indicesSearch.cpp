#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(vector<int> arr, vector<int> vec, int i, int key) {
    if(i == arr.size()) {
        return vec;
    }
    
    if(arr[i] == key) {
        vec.push_back(i);
        
    
    }
    return findIndices(arr,vec,i+1,key);

}

int main () {
    vector<int> arr =  {3,2,4,5,6,2,7,2,2};
    int key = 1;
    cout << "arr = ";
    for(int value: arr)
        cout << value << " " ;
    cout << endl << "Key = "<< key<< endl;
    vector<int> vec;
    vector<int> ans = findIndices(arr,vec,0,key);
    for (int value: ans) {
        cout << value << " ";
    }
    cout << endl;
    return 1;
}