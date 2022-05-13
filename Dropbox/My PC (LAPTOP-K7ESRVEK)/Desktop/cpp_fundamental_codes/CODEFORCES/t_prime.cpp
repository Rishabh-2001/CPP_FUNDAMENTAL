#include<bits/stdc++.h>
using namespace std;

bool isPrime(unsigned long long int  n)
{
   if(n==1)
   {
       return false;
   }
   int i=2;
   while(i*i<=n)
   {
       if(n%i==0)
       {
           return false;
       }
       i=i+1;
   }
   return true;
}
bool perfectSquare(unsigned long long int n)
{
   unsigned long long int iVar;
    float fVar;

    fVar=sqrt((double)n);
    iVar=fVar;

    if(iVar==fVar){
        return true;
    }
    else{
        return false;
    }
}
bool tprime(unsigned long long int n)
{
    if(perfectSquare(n))
    {
      unsigned long long int num=sqrt(n);
      if(isPrime(num))
      {
          return true;
      }
      else{
        return false;
      }
    }
    else
    {
        return false;
    }
}


int main()
{
int t;
cin>>t;
while(t>0)
{
    unsigned long long int  n;
    cin>>n;
    if(tprime(n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    t--;
}

return 0;
}
