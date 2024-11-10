#include <iostream>
#include <vector>
using namespace std;


void swap(vector<int>& num, int start, int i) {
    int temp;
    temp = num[start];
    num[start] = num[i];
    num[i] = temp;
}

void permutation(vector<int>& num, int start, vector<vector <int>>& answer) {
    if ( start == num.size()) {
        answer.push_back(num);
        return;
    }
    for(int i=start; i<num.size(); i++) {

        swap(num,start,i);
        permutation(num,start+1,answer);
        swap(num,i,start);
    }
}


int main() {
    vector<int> num = {1,2,3,4,5};
    vector<vector <int>> answer;

    permutation(num,0,answer);
    for(auto& value: answer) {
        for(auto& value2: value) {
            cout << value2 << " ";
        }
        cout << endl;
    }   

    return 0;
}