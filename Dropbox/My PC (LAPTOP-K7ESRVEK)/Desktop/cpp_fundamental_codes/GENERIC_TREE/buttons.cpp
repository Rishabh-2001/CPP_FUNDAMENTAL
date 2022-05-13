#include<bits/stdc++.h>
using namespace std;
int rec(int n,int m)
{
    if(n==m)
    {
        return INT_MAX;
    }
    if(n>m)
    {
        return INT_MAX;
    }

    int sa,sa2;

        sa=2+rec((n-1)*2,m);
        sa2=1+rec(n*2,m);

    return min(sa,sa2);
}
int main()
{
int n,m;
cin>>n>>m;
int ans=0;
cout<<"ans is :"<<endl;
if(m<n)
{
    ans=n-m;
}
else{
    ans=rec(n,m);
}
cout<<ans<<endl;


return 0;
}
