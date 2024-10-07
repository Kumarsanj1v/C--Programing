
#include <iostream>
using namespace std;

void diagonalSum(int array[][4],int n, int m) {
    int i=0;
    int j=0;
    int totalSum = 0;
    while( i < n && j < m) {
        totalSum += array[i][j];
        i++;
        j++;
    }
    i = 0;
    j = m-1;
    cout<<totalSum<<endl;
    while(i < n && j >= 0) {
        if(i != j && m%2 != 0)
            totalSum += array[i][j];
        i++;
        j--;
    }
    cout << "Total Diagonal Sum: "<<totalSum << endl;
}

int main() {
    int array[4][4] = {{1,2,3},{4,5,6},{7,8,9}};
    diagonalSum(array,3,3);
    return 0;
}