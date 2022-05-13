#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int j,k;
    int curr_sum=0;
    int msum=0;
    int s,e;
    for(int i=0;i<n;i++)
    {

        for(j=i;j<n;j++)
        {
             curr_sum=0;
            for(k=i;k<=j;k++)
            {
                curr_sum=curr_sum+a[k];
            }
            if(curr_sum>msum)
            {
                msum=curr_sum;
                s=i;   //STARTING AND ENDING POINT OF THE SUBARRAY WHICH IS HAVING MAX SUM
                e=j;

            }
        }
    }
    cout<<"max sum is:"<<msum<<endl;
    cout<<"Elements which form max sum subarray are: "<<endl;
    for(int i=s;i<=e;i++)
    {
        cout<<a[i]<<",";
    }

}
