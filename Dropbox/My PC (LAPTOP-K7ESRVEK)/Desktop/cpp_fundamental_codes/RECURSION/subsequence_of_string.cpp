#include<iostream>
#include<string.h>

using namespace std;
/*
int subsequence(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }

    string smallString=input.substr(1);
    int smallOutputSize=subsequence(smallString,output);
    for(int i=0;i<smallOutputSize;i++)
    {
        output[smallOutputSize+i]=input[0]+output[i];
    }
    return 2*smallOutputSize;
}
*/
void print_subsequence(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    print_subsequence(input.substr(1),output);
    print_subsequence(input.substr(1),output+input[0]);
    return;
}

int main()
{
    string input;
    cin>>input;
   /*  string*output=new string[1000];
   int count_size=subsequence(input,output);
    for(int i=0;i<count_size;i++)
    {
        cout<<output[i]<<endl;
    }
    delete[]output;
    */
    print_subsequence(input,"");

    return 0;
}
