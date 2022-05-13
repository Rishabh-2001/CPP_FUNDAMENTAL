#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

while(t>0)
{
     int k;
     cin>>k;
     int n=(k-1)/2;
     if(k%2==0)
     {
         int ans=2+(n*3);
         cout<<ans<<endl;
     }
     else{
         int ans=1+n*3;
         cout<<ans<<endl;
     }
     t--;

}


return 0;
}
