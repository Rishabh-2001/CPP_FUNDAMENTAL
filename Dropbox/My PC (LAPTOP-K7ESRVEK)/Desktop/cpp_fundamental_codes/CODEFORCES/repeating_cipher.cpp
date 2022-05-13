#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int d=1;
for(int i=0;i<s.length();)
{
    cout<<s[i];
    d++;
    i=i+d;
}



return 0;
}
