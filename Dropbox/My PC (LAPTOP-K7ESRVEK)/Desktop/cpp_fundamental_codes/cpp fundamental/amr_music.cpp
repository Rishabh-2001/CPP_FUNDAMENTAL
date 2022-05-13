#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector< pair <int,int> >a;
for(int i=0;i<n;i++)
{
    int s;
    cin>>s;
    a.push_back({s,i+1});
}
sort(a.begin(),a.end());
int ans=0;
int idx=0;
vector<int>res;
for(int i=0;i<a.size();i++)
{
    ans+=a[i].first;
    if(ans>k)
    {

    }
    else{
        res.push_back(a[i].second);
    }
}
cout<<res.size()<<endl;
for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}



return 0;
}
