#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int ans=0;
for(int i=0;i<s.length();)
{
    if(s[i]=='.')
    {
        cout<<"0";
        i++;
    }
    else if(s[i]=='-'&&s[i+1]=='.')
    {
        cout<<"1";
        i=i+2;
    }
    else if(s[i]=='-'&&s[i+1]=='-')
    {
        cout<<"2";
        i=i+2;
    }

}
return 0;
}
