#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string s;
    cin>>s;
    int fi=0;
    int li=0;
    for(int i=0;i<s.length();i++)
    {
        int key=s[i]-'0';
        if(key==1)
        {
            fi=i;
            break;
        }

    }
    for(int i=s.length()-1;i>=0;i--)
    {
        int key=s[i]-'0';
        if(key==1)
        {
            li=i;
            break;
        }
    }
    int ans=0;
    for(int i=fi;i<li;i++)
    {
        if(s[i]=='0')
        {
            ans++;
        }
    }
    cout<<ans<<endl;

}


return 0;
}
