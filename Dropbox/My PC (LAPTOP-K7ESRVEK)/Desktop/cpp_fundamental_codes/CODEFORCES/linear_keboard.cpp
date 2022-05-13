#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string key;
    cin>>key;
    string word;
    cin>>word;
    int pos=0;
    unordered_map<char,int>mp;
    for(int i=0;i<key.length();i++)
    {
        mp[key[i]]=i;
    }
    pos=mp[word[0]];
    int cost=0;
    for(int i=1;i<word.length();i++)
    {
        char target=word[i];
        int a=abs(mp[target]-pos);
        pos=mp[target];
        cost+=a;
    }
    cout<<cost<<endl;



    t--;
}


return 0;
}
