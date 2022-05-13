#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;
if(n<=3)
{
    cout<<1<<endl;
}
else{
for(int i=1;i<=n/2;i++)
{
    int rom=n-i;
    if(rom%i==0)
    {
        ans++;
    }
}
cout<<ans<<endl;
}

return 0;
}
