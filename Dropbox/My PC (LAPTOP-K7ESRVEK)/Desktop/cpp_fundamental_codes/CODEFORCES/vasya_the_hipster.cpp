#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int mn=min(a,b);
    cnt=mn;
    a=a-mn;
    b=b-mn;
    cout<<cnt<<" ";
    cnt=0;
    if(a==0&&b==0)
    {
        cout<<cnt<<endl;
    }
    else if(a==0&&b!=0)
    {
        cnt=cnt+b/2;
        cout<<cnt<<endl;
    }
    else{
        cnt=cnt+a/2;
        cout<<cnt<<endl;
    }




return 0;
}
