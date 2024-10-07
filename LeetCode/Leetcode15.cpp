
#include <iostream>
#include <vector>
using namespace std;

vector<vector <int>> threeSum(vector<int>& nums) {
    if (nums.size() < 3) 
        return {};
    vector<vector <int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-2; i++) {
        if(i>0 && nums[i] == nums[i-1])
        continue;
        int left = i+1;
        int right = nums.size()-1;
        while (left< right) {
            int currentSum = nums[i] + nums[left] + nums[right];    
            if( currentSum == 0) {
                ans.push_back({nums[i], nums[left], nums[right]});
                while(left<right && nums[left] == nums[left+1])
                left++;
                while (left<right && nums[right] == nums[right-1])
                right--;

                left++;
                right--;
            } else if(currentSum>0) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    return ans;
}

int main() {

    vector <int> nums = {-1,0,1,2,-1,-4};
    vector<vector <int>> result = threeSum(nums);
    for(int i = 0; i<result.size(); i++) {
        for(int j= 0; j<3; j++) {
            cout << result[i][j] << " ";
        }
    cout << endl;
    }

    cout << endl;
    return 0;
}