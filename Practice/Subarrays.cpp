#include <iostream>
using namespace std;

int main() {

    int array[] ={1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);
    for(int i=0;i<n; i++) {
        int k=10;   
        int temp = array[i];
        cout<<temp<<" ";
        for(int j=i; j<n; j++) {
            if(array[j]+1 == array[j+1]) {
                temp = temp * k + array[j+1];
                cout<<temp<<" ";    
            }
            else
            break;
        }
        cout<<endl;
    }
    return 0;
}