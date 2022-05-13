#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr_sum=0;
    int msum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum=curr_sum+a[i];
        if(curr_sum<0)
        {
            curr_sum=0;
        }
        msum=max(curr_sum,msum);

    }
    cout<<"max sum is:"<<msum<<endl;
}
