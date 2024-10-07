#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,1,1,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<"number of element: "<<n<<endl;
    int farthest = arr[0];
    int currentend = arr[0];
    int jump=1;
    if(farthest == 0)
        cout<<" We cannot reach the end as the first element of this array is 0, which, sadly, means we cannot jump from here."<<endl;
    for(int i = 1; i < n; i++)
    {
        if(i==n-1)
            break;
        farthest = max(farthest, i + arr[i]);

        if(i==currentend)
        {
            currentend = farthest;
            jump++;
        }
        if(i>=(n-1))
            break;
    }

    cout<<" You need minimum of "<<jump<<" jumps to reach the end of the array"<<endl;
    return 0;
}