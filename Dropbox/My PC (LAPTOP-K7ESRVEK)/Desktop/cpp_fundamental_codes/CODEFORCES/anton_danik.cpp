#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
char*a=new char[n+1];
int ac=0;
int dc=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]=='A')
    {
        ac++;
    }
    else if(a[i]=='D')
    {
        dc++;
    }
}
if(ac==dc)
{
    cout<<"Friendship"<<endl;
}
else if(ac>dc)
{
    cout<<"Anton"<<endl;
}
else{
    cout<<"Danik"<<endl;
}
return 0;
}
