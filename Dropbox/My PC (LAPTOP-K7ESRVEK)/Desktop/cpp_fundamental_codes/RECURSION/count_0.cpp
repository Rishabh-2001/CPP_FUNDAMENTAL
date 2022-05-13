#include<iostream>
using namespace std;

int count_zero(long long int n)
{
    if(n==0)
    {
        return 1;
    }

    if(n/10>0){
    int r=n%10;
    if(r==0)
    {
        return 1+count_zero(n/10);
    }
    else{
        return count_zero(n/10);
    }
    }
    return 0;


}
int main()
{
   long long int n;
    cin>>n;

    int ans=count_zero(n);
    cout<<"there are "<<ans<<" zeroes present"<<endl;
    return 0;

}
