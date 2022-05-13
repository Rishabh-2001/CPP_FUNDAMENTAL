#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a,b,c;
cin>>a>>b>>c;
int ans=0;
if(a==t||b==t||c==t)
{
    ans++;
}

if(a+b==t)
{
    ans++;
}
if(a+c==t)
{
    ans++;
}
if(b+c==t)
{
    ans++;
}
if(ans==0)
{
    ans=t;
    cout<<ans<<endl;
}
else{
cout<<ans<<endl;
}



return 0;
}
