
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> numbers, int target) {

    int start = 0;
    int end = numbers.size()-1;
    int sum = 0;
    vector<int> ans;
    while(start < end) {
        sum = numbers[start] + numbers[end];
        if(sum == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(sum > target) {
            end--;
        }
        else {
            start++;
        }
    }
    return ans;
}

int main() {

    vector <int> vec = {2,3,4};
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }cout << endl;

    int target = 6;

    vector<int> result = twoSum(vec,target);
    cout << result[0] << ", " << result[1] << endl;
    return 0;
}