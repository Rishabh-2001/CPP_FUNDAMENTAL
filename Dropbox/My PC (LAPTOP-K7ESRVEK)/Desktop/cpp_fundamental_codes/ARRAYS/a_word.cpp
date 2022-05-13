#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int lc=0;
 int uc=0;
 for(int i=0;i<s.length();i++)
 {
     int a=s[i];
     if(a>=65&&a<=91)
     {
         uc++;
     }
     else if(a>=97&&a<=123)
     {
         lc++;
     }
 }

 if(uc==lc)
 {
     for(int i=0;i<s.length();i++)
     {
         char ch=tolower(s[i]);
         cout<<ch;
     }
 }
 else if(uc>lc)
 {
     for(int i=0;i<s.length();i++)
     {
         char ch=toupper(s[i]);
          cout<<ch;
     }
 }
 else{
     for(int i=0;i<s.length();i++)
     {
         char ch=tolower(s[i]);
         cout<<ch;
     }
 }


return 0;
}
