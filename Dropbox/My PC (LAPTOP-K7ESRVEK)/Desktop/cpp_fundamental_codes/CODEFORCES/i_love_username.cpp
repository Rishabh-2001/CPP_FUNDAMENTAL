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
int cur_mx=a[0];
int cur_mn=a[0];
int ans=0;
for(int i=1;i<n;i++)
{
    if(a[i]<cur_mn)
    {
        ans++;
        cur_mn=a[i];
    }
    if(a[i]>cur_mx)
    {
        ans++;
        cur_mx=a[i];
    }
}
cout<<ans<<endl;

return 0;
}
