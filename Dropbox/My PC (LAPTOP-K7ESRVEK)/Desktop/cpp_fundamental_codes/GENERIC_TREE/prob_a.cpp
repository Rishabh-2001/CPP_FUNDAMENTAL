#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<0<<" "<<0<<endl;
    }
    else if(x==y)
    {

        cout<<1<<" "<<y<<endl;
    }
    else{

        int div=y/x;
        int val=div/x;   //25

        int target=y;
        int ans=0;
        int cnt=1;
        while(val*x<target)
        {
            x=x*val;
            ans++;
            if(x==target)
            {
                break;
            }
        }

        if(x==target)
        {
           cout<<ans<<" "<<val<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }


    t--;
}


return 0;
}
