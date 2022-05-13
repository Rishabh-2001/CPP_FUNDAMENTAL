#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{

    int mx=INT_MIN;
    int smx=INT_MIN;
    int a[4];
     for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<4;i++)
    {
        mx=max(mx,a[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]>smx&&a[i]!=mx)
        {
            smx=a[i];
        }
    }
        int aa,b;
    aa=max(a[1],a[0]);
    b=max(a[2],a[3]);
    if((aa==mx&&b==smx)||(aa==smx&&b==mx))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    t--;
}

return 0;
}
