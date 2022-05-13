#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int a=s[0];
if(a>=97&&a<=123)
{
    a=a-32;
}
s[0]=a;
cout<<s<<endl;
return 0;
}
