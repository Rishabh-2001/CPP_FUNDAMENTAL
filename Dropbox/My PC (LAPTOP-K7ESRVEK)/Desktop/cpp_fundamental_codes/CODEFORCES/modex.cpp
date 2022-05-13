#include<bits/stdc++.h>
using namespace std;
unsigned long long int compute(unsigned long long int x,unsigned long long int y,unsigned long long int n)
{
    x=x%n;
    unsigned long long int ans=1;
    while(y>0)
    {
        if(y&1)
        {
            ans=(ans*x)%n;
        }
        x=(x*x)%n;
        y>>=1;
    }
    return ans;



}
int main()
{
int t;
cin>>t;
while(t>0)
{
   unsigned long long int x,y,n;
    cin>>x>>y>>n;
    cout<<compute(x,y,n)<<endl;



    t--;
}


return 0;
}
