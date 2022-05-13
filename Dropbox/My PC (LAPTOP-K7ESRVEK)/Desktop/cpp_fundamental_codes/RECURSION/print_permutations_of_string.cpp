#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

void print_permutation(string input,string output)
{
    if(input.length()<=0)
    {
        cout<<output<<endl;
        return ;
    }

    for(int i=0;i<input.length();i++)
    {
        char key=input[i];
        string s1="";
        string s2="";
        s1=input.substr(0,i);
        s2=input.substr(i+1);
        string newstr=s1+s2;
        print_permutation(newstr,key+output);
    }
    return;
}

int main()
{
    string input;
    cin>>input;


    print_permutation(input,"");
    return 0;

}
