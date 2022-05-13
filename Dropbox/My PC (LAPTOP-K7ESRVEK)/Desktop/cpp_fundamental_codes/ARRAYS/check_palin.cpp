#include<bits/stdc++.h>
using namespace std;
bool check_palin(string s,int l,int r)
{
    if(l>=r)
    {
        return true;
    }
    if(s[l]==s[r-1])
    {
        return check_palin(s,l+1,r-1);
    }
    else{
        return false;
    }
}
int main()
{
string s;
cin>>s;
int n=s.length();
if(check_palin(s,0,n))
{
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"not palindrome"<<endl;
}



return 0;
}


fibb(int n)
{

    if(n<=1)
    {
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}
