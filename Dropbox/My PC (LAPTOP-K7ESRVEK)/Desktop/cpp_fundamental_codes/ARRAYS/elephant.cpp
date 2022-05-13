#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    if(n<=5)
    {
        cout<<1<<endl;
    }
    else{
        ans=n/5;
        int r=n%5;
        if(r==0)
        {
            cout<<ans<<endl;
        }
        else{
            cout<<ans+1<<endl;
        }
    }
return 0;
}
