#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
    int num=s[i]-'0';
    if(num>4)
    {
        if(i==0&&num==9){
        num=num;
        }
        else{
                num=9-num;
        }
    }
    char a='0'+num;
    s[i]=a;
}
cout<<s<<endl;


return 0;
}
