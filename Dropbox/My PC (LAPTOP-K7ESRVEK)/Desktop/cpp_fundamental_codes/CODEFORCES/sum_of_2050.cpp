#include<bits/stdc++.h>
using namespace std;
unsigned long long int fun(unsigned long long int n)
{
    if(n%2050!=0)
    {
        return -1;
    }
     unsigned long int ans=(unsigned long long int)n/2050;
     unsigned long long int cnt=(unsigned long long int)0;
        while(ans!=0)
        {
           unsigned long long int r=(unsigned long long int)ans%10;
            cnt+=r;
            ans=ans/10;
        }
    return cnt;
}
int main()
{
int t;
cin>>t;
while(t>0)
{
  unsigned long long int n;
  cin>>n;
  if(n<2050)
  {
      cout<<-1<<endl;
  }
  else{
                unsigned long long int ans=fun(n);
                cout<<ans<<endl;
      }




    t--;
}


return 0;
}
