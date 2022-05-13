#include<bits/stdc++.h>
using namespace std;
int main()
{
int k;
cin>>k;
string s;
cin>>s;
unordered_map<char,int>mp;
for(int i=0;i<s.length();i++)
{
    mp[s[i]]++;
}
int flag=0;
for(auto i:mp)
{
    if(i.second%k!=0)
    {
        flag=1;
        break;
    }
}
string ans;
if(flag==1)
{
    cout<<-1<<endl;
}
else{
    for(auto i:mp)
    {
        ans.push_back(i.first);
    }
    string rep=ans;
    while(k>1)
    {
        ans+=rep;
        k--;
    }

//    else if(ans.size()==1)
//    {
//        int sz=mp[ans[0]];
//        while(sz>1)
//        {
//            ans+=ans[0];
//            sz--;
//        }
////        cout<<"String:"<<ans<<endl;
//        string rep=ans;
//        while(k>1)
//        {
//            ans+=rep;
//
//            k--;
//        }
//    }

    cout<<ans<<endl;
}


return 0;
}
