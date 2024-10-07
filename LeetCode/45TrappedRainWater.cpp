// #include <iostream>
// using namespace std;

// int rainWaterTrap(int *height,int n)
// {
//     int totalStorage = 0;
//     for(int i=0; i<n; i++) {    
//         int leftMax= height[i];
//         int rightMax = height[i];
//         for(int j=i; j<n; j++)
//             rightMax = max(rightMax, height[j]);
//         for(int j=i; j>=0; j--)
//             leftMax = max(leftMax,height[j]);
//         totalStorage = totalStorage + min(rightMax,leftMax) - height[i];
//     }
//     return totalStorage;
// }
// int main() {

//     int array[] = {0,1,0,2,1,0,1,3,2,1,2,1};
//     int n = sizeof(array)/sizeof(int);
//     int storeWater = rainWaterTrap(array,n);
//     cout<<storeWater<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int rainWaterTrap(int *height,int n)
{
    int left=0;
    int right = n-1;
    int leftMax = 0;
    int rightMax = 0;
    int storage =0;
    while(left <= right) {
        if(height[left] <= height[right]) {
            if(leftMax <= height[left]){
                leftMax = height[left];
            }
            else {
                storage = storage + leftMax - height[left];
            }
            left++;
        }
        else {
            if(height[right] >= rightMax) {
                rightMax = height[right];
            }
            else {
                storage = storage + rightMax - height[right];
            }
            right--;
        }
       
    }
    return storage;
}

int main() {

    int array[] = {4,2,0,6,3,2,5};
    int n = sizeof(array)/sizeof(int);
    int storeWater = rainWaterTrap(array,n);
    cout<<storeWater<<endl;
    return 0;
}





















