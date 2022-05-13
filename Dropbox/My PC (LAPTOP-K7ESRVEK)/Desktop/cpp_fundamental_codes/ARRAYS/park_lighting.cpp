#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

int r,c;

while(t>0)
{
    int l;
cin>>r;
cin>>c;
    if(r==1&&c==1)
    {
        cout<<1<<endl;
    }
    else if(c%2==0)
    {
        l=(c/2)*r;
         cout<<l<<endl;
    }
    else if(r%2==0)
    {
        l=(r/2)*c;
         cout<<l<<endl;
    }
    else{
        l=(r/2)*c+(c/2)+1;
         cout<<l<<endl;
    }


t--;
}



return 0;
}
