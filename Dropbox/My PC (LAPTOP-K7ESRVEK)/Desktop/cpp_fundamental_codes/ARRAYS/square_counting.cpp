#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int t;
cin>>t;
while(t>0)
{
   unsigned int ans=0;
    unsigned int n;
    unsigned long long int s;
    cin>>n;
    cin>>s;
    if(n==1)
    {
        cout<<s<<endl;
    }
    else if(s==0)
    {
        cout<<s<<endl;
    }
    else if(s>n||s>n*n)
    {
        cout<<0<<endl;
    }
    else{
     unsigned long long int a=n*n;
      ans=s/a;
      cout<<ans<<endl;
    }


  t--;
}


return 0;
}
