#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n=3;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num;
    cin>>num;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
    }
    int x=mx-a[0];
    int y=mx-a[1];
    int z=mx-a[2];
    num=num-(x+y+z);
    if(num<0)
    {
       cout<<"NO"<<endl;
    }
    else{
    if(num%3==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    t--;
}

return 0;
}
