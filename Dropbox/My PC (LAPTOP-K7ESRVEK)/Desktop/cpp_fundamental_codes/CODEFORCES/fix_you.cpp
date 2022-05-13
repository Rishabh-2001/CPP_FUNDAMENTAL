#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
   int ans=0;
   for(int i=0;i<m;i++)
   {
       if(a[n-1][i]=='D')
       {
           ans++;
           a[n-1][i]='R';
       }
   }
   for(int i=0;i<n;i++)
   {
       if(a[i][m-1]=='R')
       {
           ans++;
           a[i][m-1]='D';
       }
   }
   cout<<ans<<endl;


    t--;
}


return 0;
}
