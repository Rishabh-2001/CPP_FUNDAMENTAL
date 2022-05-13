#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int a,b,c;
    cin>>a>>b>>c;
    int p=(a*1)+(b*2);
    int q=3;
    int d=INT_MAX;
    int diff=abs(p-q);
    int k=1;
    while(k<=c)
    {
        d=abs(p-(q*k));
        if(d<diff)
        {
            diff=d;
        }
        k++;
    }
   int ans=diff;
    cout<<ans<<endl;

    t--;
}


return 0;
}
