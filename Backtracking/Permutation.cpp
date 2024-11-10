#include <iostream>
#include <vector>
using namespace std;

void permutation(string str, string solution) {
    int n = str.size();
    if( n == 0) {
        cout << solution << endl;
        return;
    }
    for(int i = 0; i< str.size(); i++) {
        char ch = str[i];
        string strNext = str.substr(0,i) + str.substr(i+1, n - i - 1);
        permutation(strNext,solution + ch);
    }
}


int main() {
    string str = "abc";
    string solution = "";

    permutation(str,solution);

    return 0;
}