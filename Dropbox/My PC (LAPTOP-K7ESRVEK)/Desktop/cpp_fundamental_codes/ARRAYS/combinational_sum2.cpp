#include<bits/stdc++.h>
using namespace std;
void help(int a[],int n,int idx,int k,vector<int>&out,set<vector<int>>ans)
{
    if(idx==n)
    {
        if(k==0)
        {
           ans.insert(out);
        }
        return;
    }
    if(a[idx]<=k)
    {
    out.push_back(a[idx]);
    help(a,n,idx+1,k-a[idx],out,ans);
    out.pop_back();
    }
    help(a,n,idx+1,k,out,ans);

}
vector<vector<int>>combinational_sum2(int a[],int n,int k)
{
    vector<int>out;
    set<vector<int>>ans;
    help(a,n,0,k,out,ans);
    vector<vector<int>>res;
    set<vector<int>>::iterator itr;
    for(itr=ans.begin();itr!=ans.end();itr++)
    {
        res.push_back(*itr);
    }
    return res;

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
cin>>k;

vector<vector<int>>ans=combinational_sum2(a,n,k);
for(int i=0;i<ans.size();i++)
{
    for(auto j:ans[i])
    {
        cout<<j<<",";
    }
    cout<<endl;
}



return 0;
}
