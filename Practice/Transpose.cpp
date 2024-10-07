#include <iostream>
using namespace std;

// void print( int *(ptr),int n, int m) {
//     for(int i =0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
int main() {

    int array[2][3] = {{3,4,5},
                        {11,12,13},
                        };
    int transpose[3][2];
    
    for(int i =0;i<3;i++) {
        for(int j=0;j<2; j++) {
            transpose[i][j] = array[j][i];
        }
    }

    for(int i =0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << array[i][j] << "   ";
        }
        cout << endl;
    }

    for(int i =0; i<3; i++) {
        for(int j=0; j<2; j++) {
            cout << transpose[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}