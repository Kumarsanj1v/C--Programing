#include <iostream>
#include <vector>
using namespace std;
//using Memoisatioin
int tileProblemMemo(int n, vector<int> vec) {

    if(n==0 || n==1) {
        return 1;
    }

    if(vec[n] != -1) {
        return vec[n];
    }
    vec[n] = tileProblemMemo(n-1,vec) + tileProblemMemo(n-2,vec);
    // cout << " vec[" << n << "] = " << vec[n] << endl;
    for(int value : vec)
    cout << value << " ";
    cout << endl;
    return vec[n];
}
//using Dynamic Programing
int tileProblemDP(int n) {
    vector<int> vec(n+1,0);
    vec[0] = 1;
    vec[1] = 1;
    for(int i = 2; i<n+1; i++) {
        vec[i] = vec[i-1] + vec[i-2];
    }
    for(int value: vec)
        cout << value << " ";
    return vec[n];
}
//using Dynamic Programming(optimised approach)
int tileProblemDPOptimised(int n) {
    int prev1 = 1;
    int prev2 = 1;

    int currentValue;

    for(int i = 2; i<=n; i++) {
        currentValue = prev1 + prev2;
        prev2 = prev1;
        prev1= currentValue;
        cout <<"currentvalue("<<currentValue<<")"<<" Prev1("<<prev1<<")"<<" Prev2("<<prev2<<")"<< endl;
    }
    return currentValue;
}
int main() {
    int n = 5;
    int ans = tileProblemDPOptimised(n);
    cout << endl << ans << endl;
    return 0;
}