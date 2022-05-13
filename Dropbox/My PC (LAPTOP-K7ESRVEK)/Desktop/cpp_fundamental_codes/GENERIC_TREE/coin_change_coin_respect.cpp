#include<bits/stdc++.h>
using namespace std;

void coin_change_coin_respect(int coin[],int n,int idx,string ans,int rest_amt)
{
    if(rest_amt==0)
    {
        cout<<ans<<endl;
        return ;
    }
    if(rest_amt<0)
    {
        return;
    }
    if(idx>=n)
    {
        return ;
    }
    coin_change_coin_respect(coin,n,idx,ans+to_string(coin[idx])+" ",rest_amt-coin[idx]);
    coin_change_coin_respect(coin,n,idx+1,ans,rest_amt);

}
int main()
{
    int coin[]={1,2,3};
    cout<<"All coin combinations are:"<<endl;
    coin_change_coin_respect(coin,3,0,"",4);




return 0;
}
