#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int  n;
cin>>n;
long long int  t;
cin>>t;
long long int ans=0;
long long int cpos=1;
while(t>0)
{
    int a;
    cin>>a;
    if(a<cpos)
    {
        ans=ans+(n-cpos);
        ans=ans+a;
        cpos=a;
    }
    else{
    ans=ans+(a-cpos);
    cpos=a;
    }
    t--;
}

cout<<ans<<endl;


return 0;
}
