#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int mxl=1;
int ans=0;
for(int i=0;i<n-1;i++)
{
    if(a[i]<a[i+1])
    {
        mxl++;
    }
    else{
        ans=max(ans,mxl);
        mxl=1;
    }
}
ans=max(ans,mxl);
cout<<ans<<endl;



return 0;
}
