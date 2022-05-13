#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[n];
unordered_map<int,int>mp;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int sum=0;
int ans=0;
for(int i=0;i<n;i++)
{
   int len=0;
    int key=i;
    sum+=a[i];
    if(mp.count(sum)>0)
    {
        len=key-mp[sum];
        ans=max(ans,len);
    }
    else{
    mp[sum]=i;
    }
}
cout<<ans<<endl;
delete[]a;

return 0;
}
