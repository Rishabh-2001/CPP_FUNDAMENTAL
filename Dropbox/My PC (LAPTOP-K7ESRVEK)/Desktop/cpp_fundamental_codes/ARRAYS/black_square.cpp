#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[4];
for(int i=0;i<4;i++)
{
    cin>>a[i];
}
string s;
cin>>s;
int cal=0;
for(int i=0;i<s.length();i++)
{
    int val=s[i]-'0';
    cal=cal+a[val-1];
}
cout<<cal<<endl;


return 0;
}
