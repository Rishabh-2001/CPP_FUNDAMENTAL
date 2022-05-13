#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int t;
cin>>t;
int*a=new int[t];
for(int i=0;i<t;i++)
{
    cin>>a[i];
}
sort(a,a+t);
int mx=n-1;
int mn=0;

int ans=INT_MAX;
while(mx<t)
{
    int diff=a[mx]-a[mn];
    ans=min(ans,diff);
    mn++;
    mx++;
}
cout<<ans<<endl;


return 0;
}
