#include <iostream>
using namespace std;

int main() {

    int num = 5;
    bool boolV = true;
    for(int i=1;i<=num; i++) 
    {
        for(int j=1; j<=i; j++) 
        {
            cout<<boolV<<" ";
            boolV = !boolV;
        }
          cout<<endl;
    }
    return 0;
}