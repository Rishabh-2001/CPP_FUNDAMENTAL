#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if((r+b)%2==1&&d%2==1)
        {
            cout<<"Yes"<<endl;
        }
        else if((r+b)%2==0&&d%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


        t--;
    }



return 0;
}
