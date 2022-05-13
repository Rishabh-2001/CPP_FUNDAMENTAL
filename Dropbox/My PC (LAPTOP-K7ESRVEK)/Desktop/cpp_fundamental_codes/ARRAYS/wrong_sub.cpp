#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int k;
cin>>n>>k;
while(k>0&&n!=0)
{
    int r=n%10;
    if(r==0)
    {
        n=n/10;
    }
    else if(r!=0)
    {
        n=n-1;
    }
    k--;
}
cout<<n<<endl;


return 0;
}
