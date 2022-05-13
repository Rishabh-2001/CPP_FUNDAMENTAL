#include<iostream>
#include<cstring>
using namespace std;

void removeX(char input[],int size)
{
    if(size<=0)
    {
        return;
    }
    if(input[0]=='x')
    {
        for(int i=1;i<=size;i++)
        {
            input[i-1]=input[i];
        }
        size--;
    }
    removeX(input+1,size-1);
    return ;

}
int main()
{
    char input[100];
    cin>>input;
    removeX(input,strlen(input));
    for(int i=0;input[i]!='\0';i++)
    {
        cout<<input[i];
    }
    return 0;
}
