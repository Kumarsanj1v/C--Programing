#include <iostream>
using namespace std;

bool staircaseSearch(int array[][4], int n, int key) {
    int i = n-1;
    int j = 0;
    while( i >=0 && j <= n-1) {
        if(array[i][j] == key) {
            cout << " key found at (" << i <<"," << j << ")" <<  endl;
            return true;
        }
        if(key < array[i][j]) {
            i--;
        }
        else
        {
            j++;
        }

    }
    return false;
}

int main() {
    int array[4][4] = {{10,12,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}
                        };
    bool result = staircaseSearch(array,4,33);
    return 0;
}