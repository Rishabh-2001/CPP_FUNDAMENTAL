#include<iostream>
#include<cstring>
using namespace std;

void remove_duplicates(char a[])
{
    int e=strlen(a)-1;
    int i=0;
    int j=1;
    if(e==0||e==1)
    {
        return;
    }
    while(j<= e)
    {
        if(a[i]!=a[j])
        {
           i++;
           a[i]=a[j];
        }
        j++;
    }
    a[i+1]='\0';
    return;
}
int main()
{
    char a[1000];
    gets(a);
    remove_duplicates(a);
    cout<<"after removing duplicates:"<<endl;
    cout<<a<<endl;

}
