#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans[100]={0};
    for(int i=0;i<s.length();i++)
    {
        ans[s[i]-'A']++;
    }
    int max_val=0;
    char max_char;
    for(int i=0;i<100;i++)
    {
        if(ans[i]!=0)
        {
            if(ans[i]>max_val)
            {
                max_val=ans[i];
                max_char=i+'A';
            }
        }
    }
    cout<<max_char<<endl;
}
