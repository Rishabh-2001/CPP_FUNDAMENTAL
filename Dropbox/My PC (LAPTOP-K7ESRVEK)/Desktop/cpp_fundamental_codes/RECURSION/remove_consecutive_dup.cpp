#include<iostream>
#include<cstring>
using namespace std;

void remove_dup(char s[],int len)
{
    if(len<=1)
    {
        return;
    }
    remove_dup(s+1,len-1);
    if(s[0]!=s[1])
    {
        return;
    }
    else{
        for(int i=1;i<len;i++)
        {
            s[i-1]=s[i];
        }
        s[len-1]='\0';
        return;
    }

}
int main()
{
    char str[100];
    cin>>str;
    int l=strlen(str);

    remove_dup(str,l);
    cout<<str<<endl;
    return 0;
}
