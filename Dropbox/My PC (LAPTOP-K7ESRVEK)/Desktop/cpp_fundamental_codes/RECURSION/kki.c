#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n>0)
    {
        n--;
        if(n<=3)
        {
            cout<<"Breaking from if"<<endl;
            break;
        }
    }
    return 0;
}
