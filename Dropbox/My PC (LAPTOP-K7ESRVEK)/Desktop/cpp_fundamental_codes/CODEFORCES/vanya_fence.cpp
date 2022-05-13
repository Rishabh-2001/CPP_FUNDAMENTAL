#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,h;
cin>>n>>h;
int*a=new int[n];
int ans=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]<=h)
    {
        ans++;
    }
    else{
        ans=ans+2;
    }
}
cout<<ans<<endl;

delete[]a;
return 0;
}
