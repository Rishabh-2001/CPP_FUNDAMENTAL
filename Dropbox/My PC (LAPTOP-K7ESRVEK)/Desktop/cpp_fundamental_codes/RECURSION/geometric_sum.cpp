#include<iostream>
#include<cmath>
using namespace std;

float gsum(int n)
{
    if(n==0)
    {
        return 1;
    }
    float smallAns=gsum(n-1);
    return smallAns+1/pow(2,n);
}
int main()
{
    int n;
    cin>>n;
    float ans=gsum(n);
    cout<<ans<<endl;
    return 0;

}
