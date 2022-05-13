#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"Enter the number to find the square root:"<<endl;
    cin>>n>>p;
    float ans=0;
    float inc=1.0;
    for(int times=0;times<=p;times++)
    {

        while(ans*ans<=n)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;    //for precision part
    }
    cout<<ans<<endl;


}
