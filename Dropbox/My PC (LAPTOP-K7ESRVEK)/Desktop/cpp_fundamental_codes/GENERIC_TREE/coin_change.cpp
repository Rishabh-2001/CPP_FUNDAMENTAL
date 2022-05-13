#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
//void coinChange(int curr,int total,int n,int coins[],string ans,int lpu)
//{
//    if(curr==total)
//    {
//        cout<<ans<<endl;
//        return ;
//    }
//    if(curr>total)
//    {
//        return ;
//    }
//    for(int i=lpu;i<n;i++)
//    {
//        int key=coins[i];
//        coinChange(curr+key,total,n,coins,ans+to_string(key)+" ",mp[key]);
//    }
//}
void coinChange(int curr,int total,int n,int coins[],string ans)
{
    if(curr==total)
    {
        cout<<ans<<endl;
        return ;
    }
    if(curr>total)
    {
        return ;
    }
    for(int i=0;i<n;i++)
    {
        int key=coins[i];
        coinChange(curr+key,total,n,coins,ans+to_string(key)+" ");
    }
}
int main()
{
int total=10;
int coins[]={2,3,5,6};
mp[2]=0;
mp[3]=1;
mp[5]=2;
mp[6]=3;
coinChange(0,total,4,coins,"");


return 0;
}
