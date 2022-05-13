#include<bits/stdc++.h>
using namespace std;
int main()
{

string s;
cin>>s;
int low,hig;
int i;
for( i=0;i<s.length();i++)
{
    if(i==0&&isupper(s[i]))
    {
        continue;
    }
    else if(i>0&&islower(s[i]))
    {
        continue;
    }
    else{
        break;
    }
}
if(i>=s.length())
{
    cout<<s<<endl;
}
else{
for(int i=0;i<s.length();i++)
{
    if(islower(s[i]))
    {
        char ch=toupper(s[i]);
        cout<<ch;
    }
    else{
        char ch=tolower(s[i]);
        cout<<ch;
        }
}
}

return 0;
}
