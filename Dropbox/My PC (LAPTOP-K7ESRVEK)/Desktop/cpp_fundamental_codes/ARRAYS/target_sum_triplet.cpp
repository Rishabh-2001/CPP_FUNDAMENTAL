#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"Enter target"<<endl;
    cin>>target;
    sort(a,a+n);

    for(int i=0;i<n-1;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int sum=a[i]+a[l]+a[r];
            if(sum==target)
            {
                cout<<a[i]<<","<<a[l]<<","<<a[r]<<endl;
                l++;
                r--;
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

    }
    return 0;

}
