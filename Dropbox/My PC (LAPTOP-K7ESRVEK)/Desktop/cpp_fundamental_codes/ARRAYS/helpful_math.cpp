#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int mid=s.length()/2;
mid=mid;
int l=0;
int e=s.length()-1;
int d=0;
while(l<e)
{
    if(s[l]=='+')
    {
        char a=s[e];
        s[e]=s[l];
        s[l]=a;
        e=e-2;

    }
    l++;
}
for(int i=0;i<s.length();i++)
{
    if(isdigit(s[i]))
    {
        d++;
    }

}


int dd=s.length()-d;

sort(s.begin(),s.end()-dd);
string res;
for(int i=0;i<d;i++)
{
    res=res+s[i]+"+";
}
res.pop_back();
cout<<res<<endl;
return 0;
}
