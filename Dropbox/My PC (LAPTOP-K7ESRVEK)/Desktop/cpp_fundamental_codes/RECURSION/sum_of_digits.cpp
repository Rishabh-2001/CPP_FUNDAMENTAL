#include<iostream>
using namespace std;
int countDig(int n)
{
    if(n<=9)
    {
        return n;
    }
    return countDig(n/10)+n%10;

}
int main()
{

    int n;
    cin>>n;
    cout<<"Count of digits are: "<<countDig(n)<<endl;
    return 0;

}
