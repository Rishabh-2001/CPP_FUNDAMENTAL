#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int*a=new int[n];
int k;
cin>>k;
unordered_map<int,int>mp;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int ans=0;
for(int i=0;i<n;i++)
{
    int key=a[i];
    if(mp.count(key-k)>0)
    {
        ans+=mp[key]*mp[key-k];
        mp[key-k]=0;
    }
    if(mp.count(key+k)>0)
    {
        ans+=mp[key]*mp[key+k];
        mp[key+k]=0;
    }
    mp[key]=0;

}
cout<<ans<<endl;

return 0;
}
