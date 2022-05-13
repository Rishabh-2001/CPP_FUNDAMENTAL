#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a;
int pos=0;
int neg=0;
for(int i=0;i<n;i++)
{
    cin>>a;
    if(a%2==0)
    {
        pos++;
    }
    else{
        neg++;
    }
}
int ans=(neg * (neg - 1))/2 + (pos * (pos - 1))/2 ;
cout<<ans/2<<endl;


return 0;
}
