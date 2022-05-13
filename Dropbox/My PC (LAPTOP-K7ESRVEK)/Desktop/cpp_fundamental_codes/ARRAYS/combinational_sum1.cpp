#include<bits/stdc++.h>
using namespace std;
void combinational_sum(int a[],int idx,int n,int k,vector<int>&ds)
{
    if(idx==n)
    {
        if(k==0)
        {
            for(auto it:ds)
            {
                cout<<it<<",";
            }
            cout<<endl;
        }
        return;
    }
    if(a[idx]<=k)
    {
    ds.push_back(a[idx]);
    combinational_sum(a,idx,n,k-a[idx],ds);
    ds.pop_back();
    }

    combinational_sum(a,idx+1,n,k,ds);

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
vector<int>ds;
combinational_sum(a,0,n,k,ds);
return 0;
}
