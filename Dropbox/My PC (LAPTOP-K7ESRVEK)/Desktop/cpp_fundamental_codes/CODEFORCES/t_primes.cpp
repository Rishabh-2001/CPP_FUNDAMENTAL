#include<bits/stdc++.h>
using namespace std;
bool prime(unsigned long long int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
bool helper(unsigned long long int n)
{
    if(prime(n))
    {
        return false;
    }

    int t=1;

    for(unsigned long int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            t++;
        }
        if(t>3)
        {
            return false;
        }
    }
    t++;
    if(t==3)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
int n;
cin>>n;
unsigned long long int*a=new unsigned long long int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(helper(a[i]))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}
