#include<bits/stdc++.h>
using namespace std;
bool print_sum(int a[],int n,int idx,int k,vector<int>&ds)
{
    if(idx==n)
    {
        if(k==0)
        {
        for(auto it:ds){
            cout<<it<<",";
        }
        cout<<endl;
        return true;
        }
        return false ;
    }
    ds.push_back(a[idx]);
    if(print_sum(a,n,idx+1,k-a[idx],ds))
    {
        return true;
    }
    ds.pop_back();
    if(print_sum(a,n,idx+1,k,ds))
    {
        return true;
    }
    return false;
}
int main()
{

int n;
cin>>n;
int*a=new int [n];
for(int i=0;i<n;i++)
{

    cin>>a[i];
}
vector<int>ds;
int k;
cin>>k;
print_sum(a,n,0,k,ds);


return 0;
}
