#include <iostream>
using namespace std;

bool bruteSearchMatrix(int array[][4], int n, int key) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(array[i][j] == key) {
                cout << "key found at [" << i << "]" << "[" << j << "]" << endl;
                return true;
            }
        }
    }
    cout << "Not Found" <<endl;
    return false;
}
bool binarySearchMatrix(int array[][4],int n, int key) {
    int mid;
    
    for(int i=0; i<n; i++) {

        int left = 0;
        int right = n-1;
        mid = (left+right)/2;
        while(left<=right) {
            if(array[i][mid]== key) {
                cout << "key found at [" << i << "]" << "[" << mid << "]" << endl;
                return array[i][mid];
            }
            if(array[i][mid] > key) {
                right = mid-1;
            }
            else {
                left = mid + 1;
            }
            mid = (left+right)/2;
        }
    }
    return false;
}
int main() {
    int array[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}
                        };
    int key = 45;
    bool result = bruteSearchMatrix(array,4,key);
    bool result1 = binarySearchMatrix(array,4,key);

    cout << "Brute Force Search Result: "<< result << endl;
    cout << "Binary Search Result: " << result1 << endl;
    return 0;
}