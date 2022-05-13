#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
    }
    else if(a>b)
    {
        int val=a-b;
        if(val%2==0)
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(a<b)
    {
        int val=b-a;
        if(val%2==1)
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    t--;
}



return 0;
}
