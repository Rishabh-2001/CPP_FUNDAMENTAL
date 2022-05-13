#include<bits/stdc++.h>
using namespace std;
int main()
{
string t;
string s;
getline(cin,t);
getline(cin,s);
unordered_map<char,pair<int,int>>mp;
for(int i=0;i<s.length();i++)
{
    mp[s[i]]={i,s.length()};
}
int steps;
for(int i=0;i<t.length();i++)
{
    char key=t[i];
    if(mp.count(key)>0&&mp.count(t[i+1])<0)
    {
        pair<int,int>p=mp[key];
        int paste=1;
        int b=p.second-p.first-1;
        int c=0;
        if(p.first!=0)
        {
         c=2+p.first-0;
        }
        steps=steps+b+c+paste;
    }
    else{
         pair<int,int>p=mp[key];
         int sp=p.first;
         int lp;
         int prev=p.first;
         int k=i+1;
        int len=1;
         while(mp.count(t[k])>0&&mp[t[k]].first>prev)
         {
             k++;
             prev=mp[t[k]].first;
             len++;
             lp=prev;
         }
         int paste,b,c;
         if(sp!=0)
         {
             paste=1;
             b=sp-0;
             c=lp-sp+1;
             c=c*2;
             steps=steps+b+c+paste;
         }
         else if(sp==0)
        {
          b=p.second-lp;
          paste=1;
          steps=steps+b+paste;
        }

    }

}
cout<<steps<<endl;


return 0;
}
