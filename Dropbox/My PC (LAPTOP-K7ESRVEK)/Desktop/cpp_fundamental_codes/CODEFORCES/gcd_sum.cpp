#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int n)
{
   long long  int ans=0;
    while(n!=0)
    {
        int r=n%10;
        ans+=r;
        n=n/10;
    }
    return ans;
}
long long int gcd(long long int a,long long int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
int t;
cin>>t;
while(t>0)
{
    long long int n;
    cin>>n;
    long long int sum=fun(n);
//    cout<<"Sum is :"<<sum<<endl;
   long long  int ans=gcd(n,sum);

    while(ans<=1)
    {
        n=n+1;
        sum=fun(n);
        ans=gcd(n,sum);
    }
    cout<<n<<endl;


    t--;
}


return 0;
}
