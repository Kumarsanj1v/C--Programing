#include <iostream>
using namespace std;

int countstring(string str, int i, int j, int n) {
    if(n == 1) {
        return 1;
    }
    
    if(n <= 0) {
        return 0;
    }

    int result = countstring(str, i+1, j, n-1) +
                 countstring(str,i,j-1,n-1) -
                 countstring(str,i+1,j-1,n-2);
    
    if(str[i] == str[j]) {
        result++;
    }

    return result;


}


int main() {
    string str = "abcab";
    int n = str.size();
    int ans = countstring(str, 0,n-1,n);
    cout << ans << endl;

    return 0;
}