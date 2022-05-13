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
    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else{
        int rem=a%b;
        rem=b-rem;
        cout<<rem<<endl;
    }
    t--;
}


return 0;
}
