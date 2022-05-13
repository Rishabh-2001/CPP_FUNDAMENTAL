#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t>0)
{
    int n,x,a,b;
    cin>>n>>x>>a>>b;

     cout<<min(abs(a-b)+x,n-1)<<endl;
     t--;
}


return 0;
}
