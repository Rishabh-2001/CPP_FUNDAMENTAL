#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int con=ch;
    if(con>=65&&con<=90)
    {
        cout<<"UPPERCASE"<<endl;
    }
    else if(con>=97&&con<=122)
    {
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}
