#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        if(mp.count(s[i])>0)
        {
            if(mp[s[i]]+1==i)
            {
                mp[s[i]]=i;
                continue;
            }
            else{
                    cout<<"No"<<endl;
                    flag=1;
                    break;
            }
        }
        mp[s[i]]=i;
    }
    if(flag==0){
    cout<<"YES"<<endl;
    }



    t--;
}


return 0;
}
