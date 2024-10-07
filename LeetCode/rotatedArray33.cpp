#include <iostream>
using namespace std;

int rotate(int *nums, int n, int target) {
    int lowerBound = 0;
    int upperBound = n-1;
    while (lowerBound <= upperBound)
    {
       int middle = (lowerBound + upperBound)/2;
       if(target == nums[middle])
       {
        return middle;
       }
       if(nums[lowerBound] <= nums[middle])
       {
            if( nums[lowerBound] <= target && target <= nums[middle])
            {
                upperBound = middle - 1;
            }
            else
            {
                lowerBound = middle + 1;
            }
       }
       else
       {
            if(nums[middle] <= target && target <= nums[upperBound])
            {
                lowerBound = middle + 1;
            }
            else
            {
                upperBound = middle-1;
            }
       }
    
    }
    return -1;
}

int main() {

    int array[] = {4,5,6,7,0,1,2};
    int n = sizeof(array)/sizeof(int);
    int target = 0;

    int index = rotate(array,n,target);
    cout <<"Index: " << index << endl;
    return 0;
}
