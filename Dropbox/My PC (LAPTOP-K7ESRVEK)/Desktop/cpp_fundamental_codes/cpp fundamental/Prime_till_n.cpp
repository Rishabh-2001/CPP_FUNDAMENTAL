/*
     TO PRINT PRIME NOS UNTIL N
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
        for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
     return true;

}


int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bool ans=isPrime(i);
        if(ans==true)
        {
            cout<<i<<" is prime"<<endl;
        }
        else
        {
              cout<<i<<" is Not prime"<<endl;
        }
    }


}

