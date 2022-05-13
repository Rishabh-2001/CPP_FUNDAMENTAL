#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int r;
int ans=1;
int s;
cin>>s;
r=s%10;
while(n>1)
{
    int m;
    cin>>m;
    int sr=m/10;
    if(r==sr)
    {
        ans++;
        r=m%10;
    }
    n--;
}
cout<<ans<<endl;

return 0;
}
