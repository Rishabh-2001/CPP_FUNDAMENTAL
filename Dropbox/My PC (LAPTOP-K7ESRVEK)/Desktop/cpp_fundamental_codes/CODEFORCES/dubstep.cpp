#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int li;
int flag=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        i+=2;
    }
    else{
            if(li+1<i&&flag==1)
                {
                  cout<<" "<<s[i];
                  li=i;
                  flag=1;
                }
            else{
                cout<<s[i];
                li=i;
                flag=1;
            }
    }

}




return 0;
}



