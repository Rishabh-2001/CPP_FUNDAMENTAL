#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int t;
cin>>t;
int flag=0;
int ans=0;
int ts=0;
for(int i=1;i<=n;i++)
{
    ts+=5*i;
    if((ts+t)>240)
    {
        flag=1;
        ans=i-1;
        break;
    }
}
if(flag==0)
{
    cout<<n<<endl;
}
else{
cout<<ans<<endl;
}


return 0;
}
