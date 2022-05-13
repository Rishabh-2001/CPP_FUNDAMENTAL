#include<iostream>
#include<cstring>
using namespace std;

void replace_pi(char input[100],int size)
{
    if(size<=1)
    {
        return;
    }
    if(input[0]=='p')
    {
        if(input[1]=='i')
        {
            for(int i=size;i>1;i--)
            {
                input[i+2]=input[i];
            }
            input[0]='3';
            input[1]='.';
            input[2]='1';
            input[3]='4';
            size=size+2;
        }
    }
    replace_pi(input+1,size-1);
}
int main()
{
    char input[100];
    cin>>input;
    replace_pi(input,strlen(input));
    for(int i=0;input[i]!='\0';i++)
    {
        cout<<input[i];
    }
    return 0;

}
