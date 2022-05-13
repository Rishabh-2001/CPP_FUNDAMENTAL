#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1,s2;
cin>>s1;
cin>>s2;

int i;
for(i=0;i<s1.length();i++)
{
   int a=s1[i]-'0';
   int b=s2[i]-'0';
    if(a==b||abs(a-b)==32) continue;
    else if(toupper(s1[i])<toupper(s2[i]))
     {
       cout<<"-1"<<endl;
       break;
     }
     else{
        cout<<"1"<<endl;
        break;
     }
}
    if(i==s1.length())
    {
        cout<<"0"<<endl;
    }
    return 0;
}

