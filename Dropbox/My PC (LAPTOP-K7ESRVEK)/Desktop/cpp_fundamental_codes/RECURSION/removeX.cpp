#include<iostream>
#include <bits/stdc++.h>
#include<cstring>
using namespace std;

void removeX(char s[100],int n,int l)
{
    if(s[l]=='\0')
    {
        return;
    }
    if(s[l]=='x'||s[l]=='X')
    {
        for(int i=l;i<n;i++)
        {
            s[i]=s[i+1];
        }
        n--;
    }
    else{
                l++;
    }
            removeX(s,n,l);
}

int main()
{
   char str[100];
   int n=strlen(str);
   int l=0;
   removeX(str,n,l);
    cout<<str<<endl;
   return 0;
}

/*

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void help(char input[],int size ,int a)
{
    if(input[a]=='\0')
        return;
    if(input[a]=='x')
    {
        for(int i=a;i<size;i++)
        {
            input[i]=input[i+1];
        }
        size=size-1;
    }
     else
        a++;

    help(input,size,a);
}


void removeX(char input[]) {

    int size= strlen(input);
    int count=0;
    help(input,size,count);

}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
*/
