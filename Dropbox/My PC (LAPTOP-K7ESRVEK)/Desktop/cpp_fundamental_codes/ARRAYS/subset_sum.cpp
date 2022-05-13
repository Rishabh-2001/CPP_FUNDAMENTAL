#include<bits/stdc++.h>
using namespace std;
void subset_sum(int a[],int n,int idx,int sum,vector<int>&ans)
{
    if(idx==n)
    {
        ans.push_back(sum);

        return ;
    }

        subset_sum(a,n,idx+1,sum+a[idx],ans);
        subset_sum(a,n,idx+1,sum,ans);

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
vector<int>ans;
int sum=0;
subset_sum(a,n,0,sum,ans);
for(auto i:ans)
{
    cout<<ans[i]<<",";
}
cout<<endl;
return 0;
}
