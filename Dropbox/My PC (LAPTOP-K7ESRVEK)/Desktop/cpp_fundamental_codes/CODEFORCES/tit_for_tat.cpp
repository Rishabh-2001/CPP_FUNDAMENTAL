#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n,k;
    cin>>n>>k;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    while(k>0&&l<r)
    {
        while(a[l]>0&&l<r)
        {
            a[l]=a[l]-1;
            a[r]=a[r]+1;
            k--;
            if(k==0)
            {
                break;
            }
        }
        l++;
    }
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;


    t--;
}


return 0;
}
