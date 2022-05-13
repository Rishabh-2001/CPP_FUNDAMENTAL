#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
/*
int length(int n)
{
    int len=0;
    while(n>0)
    {
        n=n/10;
        len++;
    }
    return len;
}

void print_keypad_combination(int num,string keypad[],string output)
{
        if(num==0||num==1)
    {
        cout<<output<<endl;
        return ;
    }
    int len=length(num);
    int div=pow(10,len-1);
    int smallNum=num%div;
    int myNum=num/div;
    string adder=keypad[myNum];  //to work on this
    for(int i=0;i<adder.length();i++)
    {
       print_keypad_combination(smallNum,keypad,output+adder[i]);
    }
     return;

}

int main()
{
    string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int num;
    cin>>num;
    print_keypad_combination(num,keypad,"");
    return 0;

}
*/
 string getKey(char digit)
    {
        string ans="";
        if(digit=='2')
        {
            ans="abc";
            return ans;
        }
        else if(digit=='3')
        {
            ans="def";
            return ans;
        }
        else if(digit=='4')
        {
            ans="ghi";
            return ans;
        }
         else if(digit=='5')
        {
            ans="jkl";
             return ans;
        }
        else if(digit=='6')
        {
            ans="mno";
            return ans;
        }
         else if(digit=='7')
        {
            ans="pqrs";
             return ans;
        }
        else if(digit=='8')
        {
            ans="tuv";
            return ans;
        }
         else if(digit=='9')
        {
            ans="wxyz";
             return ans;
        }
        return ans;

    }
void letter(string input,string ans)
{
    if(input[0]=='\0')
    {
        cout<<ans<<endl;
        return;
    }
     for(int i=0;input[i]!='\0';i++)
        {
            char key=input[i];
            string anskey=getKey(key);
            string q1=input.substr(0,i);
            string q2=input.substr(i+1);
            string roq=q1+q2;
            for(int j=0;anskey[j]!='\0';j++)
            {
                string newans=anskey[j];
                letter(roq,newans+ans);
            }
        }
        return;
}
int main(){
  string input;
  cin>>input;
  string ans="";
  letter(input,"");
  return 0;

}
