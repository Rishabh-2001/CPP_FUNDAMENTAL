#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    unsigned long long int n;
    cin>>n;
    unsigned long long int ans=(n+1)/10;
    int rem=n%10;
    cout<<ans<<endl;


    t--;
}


return 0;
}
