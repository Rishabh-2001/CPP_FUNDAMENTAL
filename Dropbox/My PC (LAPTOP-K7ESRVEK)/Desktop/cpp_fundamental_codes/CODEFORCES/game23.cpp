#include<bits/stdc++.h>
using namespace std;
int ans=-1;
void fun(int n,int m,int s)
{
    if(n==m)
    {
        ans=s;
        return ;
    }
    if(n>m)
    {
        return ;
    }
    fun(n*2,m,s+1);

    fun(n*3,m,s+1);
}
int main()
{
int n,m;
cin>>n>>m;
fun(n,m,0);
cout<<ans<<endl;


return 0;
}
