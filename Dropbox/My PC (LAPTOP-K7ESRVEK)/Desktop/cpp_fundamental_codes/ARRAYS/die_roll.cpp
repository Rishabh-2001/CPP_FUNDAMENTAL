#include<bits/stdc++.h>
using namespace std;
int main()
{
int y,w;
cin>>y>>w;
int mx=max(y,w);
int e=6-mx;
int d=6;
e=e+1;
if(e==6)
{
    cout<<1<<"/"<<1<<endl;
}
else{

    for(int i=1;i<=min(e,d);i++)
    {
        if(e%i==0&&d%i==0)
        {
            e=e/i;
            d=d/i;
        }
    }
    cout<<e<<"/"<<d<<endl;
}

return 0;
}
