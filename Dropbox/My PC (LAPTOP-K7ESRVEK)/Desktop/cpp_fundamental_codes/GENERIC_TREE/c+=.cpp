#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int a,b,n;
    cin>>a>>b>>n;
    int mn=min(a,b);
    int mx=max(a,b);
    int ans=0;
    while(mx<=n||mn<=n)
    {
        mx=mx+mn;
        mn=mn+mx;
        ans++;
    }
    cout<<ans<<endl;



    t--;
}


return 0;
}
