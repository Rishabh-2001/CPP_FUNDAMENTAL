#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int nten=9;
    int nhun;
    int ncent=18;

    if(n<10)
    {
        cout<<n<<endl;
    }
    else if(n==10)
    {
        cout<<nten<<endl;
    }
    else if(n<=100)
    {
        int diff=n-10;
        nhun=diff/10;
        nhun=nhun+nten;
        cout<<nhun<<endl;
    }
    else{
        int ans;
        int
        ans=ncent+
    }






    t--;
}


return 0;
}
