#include<iostream>
#include<cstring>
using namespace std;


bool checkPalinHelp(string s,int l,int r)
{
    if(l==r)
    {
        return true;
    }

    if(s[l]==s[r])
    {
        return checkPalinHelp(s,l+1,r-1);
    }
    else{
        return false;
    }

}
bool checkPalindrome(string s)
{
    int l=0;
    int r=s.length()-1;
    return checkPalinHelp(s,l,r);

}
int main()
{
    string s;
    cin>>s;
    if(checkPalindrome(s))
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not Palindrome"<<endl;
    }
    return 0;
}
