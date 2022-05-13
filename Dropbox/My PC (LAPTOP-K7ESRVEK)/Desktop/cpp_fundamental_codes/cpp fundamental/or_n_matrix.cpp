#include<bits/stdc++.h>
using namespace std;
void change(int out[],int r,int c,int m,int n)
{
    for(int i=0;i<=n;i++)
    {
        out[r][i]=0;
    }
    for(int i=0;i<=m;i++)
    {
        out[i][c]=0;
    }
    return ;
}
bool fun(int out[],int r,int c,int m,int n)
{
    for(int i=0;i<=n;i++)
    {
        if(out[r][i]==1)
        {
            return false;
        }
    }
    for(int i=0;i<=m;i++)
    {
        if(out[i][c]==1)
        {
            return false;
        }
    }
    return true;

}
int main()
{
int m,n;
cin>>m>>n;
int in[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {

        cin>>in[i][j];
    }
}
int out[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        out[i][j]=1;
    }
}
unordered_map<int,int>mp;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        if(in[i][j]==0)
        {
            change(out,i,j,m,n);
            mp[i]=j;
        }
    }
}
int flag=0;
for(auto i:mp)
{
    int f=i.first;
    int g=i.second;
    if(fun(out,f,g,m,n))
    {
        continue;
    }
    else{
        flag=1;
        break;
    }
}
if(flag==1)
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<n;j++)
        {

            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
}


return 0;
}
