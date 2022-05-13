#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,l;
cin>>n>>l;
long int*a=new long int[n];
for(long int i=0;i<n;i++)
{
    cin>>a[i];
}
long double  mx=0.00;
sort(a,a+n);
for(long int i=0;i<n-1;i++)
{
    long double  d=a[i+1]-a[i];
    mx=max(mx,d);
}
 long double  ans=mx/2.0;
if(a[0]!=0)
{
   long double  sd=a[0];
    if(ans<sd)
    {
        ans=sd;
    }
}


for(int i=0;i<n-1;i++)
{
    if((a[i]+(2*ans))>=a[i+1])
    {
        continue;
    }
}
if(a[n-1]!=l)
{
    long double ed=abs(a[n-1]-l);
    if(ed>ans)
    {
        ans=ed;
    }
}

cout<<std::setprecision(std::numeric_limits<long double>::digits10 + 1)
              <<ans<<endl;

return 0;
}
