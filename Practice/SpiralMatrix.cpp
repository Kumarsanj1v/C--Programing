#include <iostream>
using namespace std;

void print(int array[3][3]) {
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout<<array[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
void spiralMatrix(int array[3][3],int n,int m) {
    int startR = 0;
    int startC = 0;
    int endR = n-1;
    int endC = m-1;
    while(startR <= endR && startC <= endR) {
        for(int j = startC; j<=endR; j++) {
            cout<<array[startR][j]<<" ";
        }
        for(int i=startR+1; i<=endR; i++) {
            cout<<array[i][endC]<<" ";
        }
        for(int j=endC-1; j>=0; j--) {
            if(endR == startR) {
                break;
            }
            cout<<array[endR][j]<<" ";
        }
        for(int i = endR-1; i>=startR+1; i--) {
            if(endC == startC) {
                break;
            }
            cout<<array[i][startC]<<" ";
        }
        startR++; startC++;
        endR--; endC--;
}
}
int main() {
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print(array);

    spiralMatrix(array,3,3);

    return 0;
}