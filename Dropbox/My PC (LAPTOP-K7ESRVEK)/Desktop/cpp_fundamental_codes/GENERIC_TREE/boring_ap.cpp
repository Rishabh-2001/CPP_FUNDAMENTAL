#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int x;
    cin>>x;
    int*a=new int[36];
    a[0]=1;
    a[1]=11;
    a[2]=111;
    a[3]=1111;
    int k=2;
    int d=0;
    for(int i=4;i<36;i++)
    {
        a[i]=a[d]*k;
        d++;
        if(d>3)
        {
            d=0;
            k++;
        }
    }
    int idx=0;
    for(int i=0;i<36;i++)
    {
        if(a[i]==x)
        {
            idx=i;
            break;
        }
    }
    int*p=new int[4];
    p[0]=1;
    p[1]=3;
    p[2]=6;
    int ans=0;
    int n=(idx+1)/4;
    ans=10*n;
    int rem=idx%4;
    ans=ans+p[rem];
    cout<<ans<<endl;



 delete[]p;
 delete[]a;
    t--;
}


return 0;
}
