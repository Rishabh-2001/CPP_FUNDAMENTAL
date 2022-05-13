#include<bits/stdc++.h>
using namespace std;
int sumn(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+i;
    }
    return ans;
}
int main()
{
int n;
cin>>n;
int ht=0;
int ans=0;
if(n<=2)
{
    cout<<1<<endl;
}
else{
for(int i=1;i<=sqrt(n);i++)
{
    ans+=sumn(i);
    if(ans>n)
    {
        break;
    }
    ht++;
}
cout<<ht<<endl;
}
return 0;
}
