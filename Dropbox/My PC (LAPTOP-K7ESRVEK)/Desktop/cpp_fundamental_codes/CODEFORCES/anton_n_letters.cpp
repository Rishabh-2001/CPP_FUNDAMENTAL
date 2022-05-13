#include<bits/stdc++.h>
using namespace std;
int main()
{
int ans=1;
string s;
getline(cin,s);
int len=s.length();
s.erase(remove(s.begin(),s.end(),' '),s.end());
s.erase(remove(s.begin(),s.end(),','),s.end());
sort(s.begin(),s.end());


if(len==2)
{
    cout<<0<<endl;
}
else if(len==3)
{
    cout<<ans<<endl;
}
else{
        int len=s.length()-3;
        for(int i=len;i>0;i--)
        {
            if(s[i]!=s[i-1])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
}
return 0;
}


