#include <iostream>
using namespace std;

int main()
{
    int num =5;
    int mid = 2*num/2;
    int left = mid;
    int right = mid;

    for(int i =1; i<=num; i++)
    {
        int printN=i;
        for(int j = 1; j<=2*num-1; j++)
        {
            if(j>=left && j<=right)
            {
                cout<<" "<<printN<<" ";
                if(printN != 1 && j<=num)
                printN--;
                else
                printN++;
            }
            else
            cout<<"   ";
        }
        left = left-1;
        right = right+1;
        cout<<endl;

        
    }

    return 0;
}