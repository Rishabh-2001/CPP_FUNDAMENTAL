#include<bits/stdc++.h>
using namespace std;
int fun(unsigned long long int n)
{
    int len=0;
    while(n>0)
    {
        len++;
        n=n/10;
    }
    return len;
}


int main()
{
int t;
cin>>t;
while(t>0)
{
    unsigned long long int n;
    cin>>n;
    int ans=0;
    for(unsigned long long int i=1;i<=n;i=i*10+1)
    {
        for(int d=1;d<=9;d++)
        {
            if(i*d<=n)
            {
                ans++;
            }
        }
    }



  cout<<ans<<endl;
    t--;
}



return 0;
}
