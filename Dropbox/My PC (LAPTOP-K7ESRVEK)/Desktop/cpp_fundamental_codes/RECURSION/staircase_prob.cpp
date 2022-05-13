#include<iostream>
using namespace std;

void staircase(int curr,int n,string ans)
{
    if(curr==n)
    {
        cout<<ans<<endl;
        return;
    }
    if(curr>n){
        return;
    }

    staircase(curr+1,n,ans+" 1 ");


    staircase(curr+2,n,ans+" 2 ");


    staircase(curr+3,n,ans+" 3 ");

    return;
}
int main()
{
    int n;
    cin>>n;
    staircase(0,n,"");
    return 0;
}
