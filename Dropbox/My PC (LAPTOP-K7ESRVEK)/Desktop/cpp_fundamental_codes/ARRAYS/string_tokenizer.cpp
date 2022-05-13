#include<iostream>
#include<cstring>
#include<string>
using namespace std;

char *token(char*s,char delim)
{
    int i=0;
    static char*input=NULL;
    if(s[i]!=NULL)
    {
        input=s;
    }
    if(input==NULL){
        return NULL;
    }

    char* output=new char[strlen(input)+1];
    int idx=0;
    for(;input[idx]!='\0';idx++)
    {
        if(input[idx]!=delim)
        {
            output[idx]=input[idx];
        }
        else{
                output[idx]='\0';
                input=input+idx+1;
                return output;
        }
    }

    output[idx]='\0';
    input=NULL;
    return output;
}

int main()
{
    char s[1000]="Today is a, rainy day, and it is still, raining from, last night.";
   // char *ptr=strtok(s,",");
    char *ptr=token(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
       // ptr=strtok(NULL,",");
       ptr=token(NULL," ");
        cout<<ptr<<endl;
    }
   return 0;
}


