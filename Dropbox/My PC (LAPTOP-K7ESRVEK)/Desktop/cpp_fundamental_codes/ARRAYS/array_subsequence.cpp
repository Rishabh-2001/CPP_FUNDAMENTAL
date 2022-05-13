#include<bits/stdc++.h>
using namespace std;
void subsequence(int a[],int n,int idx,vector<int>&ds)
{

    if(idx==n)
    {
        for(int i=0;i<ds.size();i++)
        {
            cout<<ds[i]<<",";
        }
        cout<<endl;
        return ;
    }
    ds.push_back(a[idx]);
    subsequence(a,n,idx+1,ds);
    ds.pop_back();
    subsequence(a,n,idx+1,ds);




}
int main()
{
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
vector<int>ds;
subsequence(a,n,0,ds);

return 0;
}
