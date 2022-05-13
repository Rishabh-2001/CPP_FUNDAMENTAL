#include<iostream>
using namespace std;

int mul(int a,int b)
{
    if(b==0||a==0)
    {
        return 0;
    }
    int smallAns=mul(a,b-1);
    return a+smallAns;


}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<"Multiplication of two num is:"<<mul(a,b)<<endl;
    return 0;
}
