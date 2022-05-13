#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int*a=new int[m];
    int mx=INT_MIN;
    int mn=INT_MAX;
    int ans=INT_MAX;
    int flag=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    if(n==m)
    {
        for(int i=0;i<m;i++)
        {
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        ans=mx-mn;
    }
    else{
    for(int i=0;i<m-3;i++)
    {
        int j=i+1;
         mx=a[i];
         mn=a[i];
         if(i+n<=m){
        while(j<i+n)
        {
            if(mx<a[j])
            {
                mx=a[j];
            }
            if(mn>a[j])
            {
                mn=a[j];
            }
            j++;
        }
         }

        ans=min(ans,mx-mn);

    }
    }
    cout<<ans<<endl;




return 0;
}
