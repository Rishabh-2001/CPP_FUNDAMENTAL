#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int hh,mm;
    cin>>hh>>mm;
    int ans=0;
    int mn=0;
    mn=60-mm;
    hh++;
    hh=24-hh;
    mn=mn+(60*hh);
    cout<<mn<<endl;

    t--;
}



return 0;
}
