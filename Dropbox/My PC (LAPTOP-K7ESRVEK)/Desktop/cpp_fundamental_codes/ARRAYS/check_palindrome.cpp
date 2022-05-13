#include<iostream>
#include<cstring>
using namespace std;

bool check_palindrome(char a[])
{
    int i=0;
    int j=strlen(a)-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
   char a[1000];
   gets(a);
   if(check_palindrome(a))
   {
       cout<<"Palindromic string"<<endl;
   }
   else
   {
       cout<<"Not a palindromic string"<<endl;
   }
   return 0;



}

