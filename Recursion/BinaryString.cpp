#include <iostream>
using namespace std;

void BinaryString(int n, int lastPosition, string ans) {

    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastPosition != 1) {
        BinaryString(n-1,0, ans + '0');
        BinaryString(n-1,1,ans + '1');
    }
    else {
        BinaryString(n-1,0,ans + '0');
    }
}

int main() {
    string ans = "";
    BinaryString(3,0,ans);
    return 0;
}