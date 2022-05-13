#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
int total;
cin>>a>>b>>c>>d>>total;
int ans=0;
if(a==1)
{
    cout<<total<<endl;
}
else{

 for(int i=1;i<=total;i++)
 {
     if(i%a==0||i%b==0||i%c==0||i%d==0)
     {
         continue;
     }
     else{
        ans++;
     }
 }
 ans=total-ans;
   cout<<ans<<endl;
}


return 0;
}
