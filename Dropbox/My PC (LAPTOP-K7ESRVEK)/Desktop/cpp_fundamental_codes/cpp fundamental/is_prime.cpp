/*
   TO CHECK THE GIVEN NUMBER IS PRIME OR NOT
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int flag=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Not a Prime number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime number"<<endl;
    }
    return 0;


}


