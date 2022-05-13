#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

bool isPalin(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


void palindrome_partition(string input,string output)
{
    if(input.length()<=0)
    {
        cout<<output<<endl;
        return ;
    }
    for(int i=0;i<input.length();i++)
    {
        string key=input.substr(0,i+1);
        string newstr=input.substr(i+1);
        if(isPalin(key)){
        palindrome_partition(newstr,output+key+" ");
        }
    }
    return;
}


int main()
{
    string input;
    cin>>input;

    palindrome_partition(input,"");
    return 0;


}

