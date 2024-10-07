#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> vec, int i, int key) {
    if ( i == vec.size()){
            return -1;
        }
    int ans = lastOccur(vec,i+1,key);
    if(ans == -1 && vec[i] == key) {
        return i;
    }
    return ans;
}
int main() {
    vector<int> vec = {1,2,6,6,7,6,8};
    int ans = lastOccur(vec,0,6);
    cout << " size: "<< vec.size() << endl;
    cout << ans << endl;
    return 0;
}