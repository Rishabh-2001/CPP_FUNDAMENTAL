#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n==1)
{
    cout<<1<<endl;
}
else{
int*a=new int[n];
int lm=0;
int ans=INT_MIN;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int last=a[0];
lm=1;
for(int i=1;i<n;i++)
{
    if(a[i]>=last)
    {
        lm++;
        last=a[i];
    }
    else
    {
        ans=max(ans,lm);
        last=a[i];
        lm=1;
    }
}
ans=max(ans,lm);
cout<<ans<<endl;
delete[]a;
}

return 0;
}
