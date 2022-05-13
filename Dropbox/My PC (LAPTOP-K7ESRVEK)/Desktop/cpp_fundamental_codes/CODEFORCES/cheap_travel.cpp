#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,a,b;
cin>>n>>m>>a>>b;
int op1=n*a;
int op2=INT_MAX;
int op3=INT_MAX;
if(m>=n)
{
    op2=b;
}
else if(m<n)
{
    int ridereqd=n/m;
    int riderem=n%m;
    if(a<b)
    {
        op3=ridereqd*b+riderem*a;
    }
    else{
            if(riderem!=0)
            {
        op3=ridereqd*b+b;
            }
            else{
                op3=ridereqd*b;
            }
    }
}
int ans=min(op1,min(op2,op3));
cout<<ans<<endl;

return 0;
}
