#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n,int k)
{
    int mx=INT_MIN;
    int mn=INT_MAX;
    queue<int>q;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(q.size()==4)
        {
            ans=ans+mn+mx;
             q.pop();
             mn=min(a[i],mn);
             mx=max(a[i],mx);
              q.push(a[i]);
        }
        else{
                mn=min(a[i],mn);
                mx=max(a[i],mx);
                q.push(a[i]);

        }
    }
    return ans;

}
int main()
{
int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int k;
cout<<"Enter k:"<<endl;
cin>>k;
int ans=sum(a,n,k);
cout<<ans<<endl;

return 0;
}
