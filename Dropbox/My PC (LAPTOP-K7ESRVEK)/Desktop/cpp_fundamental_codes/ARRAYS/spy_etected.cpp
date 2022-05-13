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
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]!=a[i-1]&&a[i]!=a[i+1])
        {
            ans=i;
            break;
        }
        else
        {
            if(a[i]==a[i+1]&&a[i]!=a[i-1])
            {
                ans=i-1;
                break;
            }
            else if(a[i]==a[i-1]&&a[i]!=a[i+1]){
                ans=i+1;
                break;
            }
        }
    }
    cout<<ans+1<<endl;

    t--;
}


return 0;
}
