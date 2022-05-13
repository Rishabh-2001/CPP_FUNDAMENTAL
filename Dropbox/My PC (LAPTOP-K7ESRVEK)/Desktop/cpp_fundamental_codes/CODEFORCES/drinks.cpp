#include<bits/stdc++.h>
using namespace std;
int main()
{
double n;
cin>>n;
double t=n;
double ans=0.0;
while(n>0)
{
    double m;
    cin>>m;
    ans+=m;
    n--;
}
cout<<ans/t<<endl;


return 0;
}
