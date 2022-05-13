#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;
while(n>0)
{
    int p,q;
    cin>>p>>q;
    if(p+2<=q)
    {
        ans++;
    }
    n--;
}
cout<<ans<<endl;


return 0;
}
