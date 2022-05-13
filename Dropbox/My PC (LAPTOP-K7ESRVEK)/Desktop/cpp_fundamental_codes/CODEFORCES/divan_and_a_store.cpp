#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=r&&a[i]>=l)
        {
            sum+=a[i];
            if(sum<=k)
            {
                ans++;
            }
            else{
                break;
            }
        }
    }
    cout<<ans<<endl;


    t--;
}


return 0;
}
