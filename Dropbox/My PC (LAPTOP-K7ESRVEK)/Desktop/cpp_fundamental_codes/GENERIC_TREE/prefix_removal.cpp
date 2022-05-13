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
    unordered_map<char,int>mp;
    for(long int i=0;i<s.length();i++)
    {
        char key=s[i];
        mp[key]++;
    }

    string res;
    if(s.length()==0)
    {
        cout<<s<<endl;
    }
    else if(s.length()==1)
    {
        cout<<s<<endl;
    }
    else{
    for(long int i=0;i<s.length();i++)
    {
        if(mp[s[i]]>1)
        {
              mp[s[i]]--;
        }
        else{
            res=s.substr(i,s.length()-1);
            break;
        }
    }
     for(long int i=0;i<s.length();i++)
    {
        if(mp[s[i]]>1)
        {
              mp[s[i]]--;
        }
        else{
            res=s.substr(i,s.length()-1);
            break;
        }
    }
    cout<<res<<endl;

    }

    t--;
}

return 0;
}
