#include<bits/stdc++.h>
using namespace std;

vector<string>permute(string s)
{
    if(s.length()==0)
    {
        vector<string>out;
        out.push_back("");
        return out;
    }
    for(int i=0;i<s.length();i++)
    {
        char key=s[i];
        string fp=s.substr(0,i);
        string sp=s.substr(i+1);
        string rest=fp+sp;
        vector<string>ans=permute(rest);

    }
}
int main()
{
string s;
cin>>s;
vector<string>ans=permute(s);
cout<<"Permutations of the string is :"<<endl;
for(auto it:ans)
{
    cout<<it<<",";
}
cout<<endl;


return 0;
}
