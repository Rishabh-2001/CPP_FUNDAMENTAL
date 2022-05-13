#include<bits/stdc++.h>
using namespace std;
void factor(int s,unordered_map<int,vector<int>>&mp)
{
    vector<int>ans;
    for(int i=1;i<=s/2;i++)
    {

        if(s%i==0)
        {
            ans.push_back(i);
        }
    }
    ans.push_back(s);
    mp[s]=ans;
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
unordered_map<int,vector<int>>mp;
for(int i=0;i<n;i++)
{
    factor(a[i],mp);
}


unordered_map<int,vector<int>>::iterator it=mp.begin();
int common;
while(it!=mp.end())
{
   int ans=it->first;
   cout<<ans<<":";
   common=it->second[1];

   for(int i=0;i<it->second.size();i++)
   {

   }
   cout<<endl;
   it++;
}


return 0;
}
