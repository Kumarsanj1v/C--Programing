// reversing array without using temp variable
#include <iostream>
using namespace std;

int main()
{
    int array[] = {2,7,4,34,27,33,12,78,4,6,24};
    int n = sizeof(array)/sizeof(int);
    int j=0;
    for(int i=0; i<n/2; i++)
    {
        array[i] += array[n-1-j];
        array[n-1-j] = array[i] - array[n-1-j];
        array[i] -= array[n-1-j];
        j++;
    }
    for(int i =0; i<n; i++)
    cout<<array[i]<<" ";
    cout << endl;
    return 0;
}