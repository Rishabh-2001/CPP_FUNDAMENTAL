#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
string res;
while(i<n)
{
    if(i%2==1)
    {
        res+="I hate that ";
    }
    else{
        res+="I love that ";
    }
    i++;
}
if(i==n)
{
    if(i%2==1)
    {
        res+="I hate it";
    }
    else{
        res+="I love it";
    }
}
cout<<res<<endl;
return 0;
}
