#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0;
     if(n==1)
     {
         ans=a[n-1];
     }
     else{
        ans=a[n-1]+a[n-2];
     }
     cout<<ans<<endl;




    t--;
}

return 0;
}
