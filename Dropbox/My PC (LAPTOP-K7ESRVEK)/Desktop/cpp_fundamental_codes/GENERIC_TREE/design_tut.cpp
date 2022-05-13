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

int main()
{
unsigned long int n;
cin>>n;
for(unsigned long int i=4;i<=n/2;i++)
{
    if(!prime(i)&&!prime(n-i))
    {
        cout<<i<<" "<<n-i<<endl;
        break;
    }
}



return 0;
}
