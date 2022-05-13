#include<iostream>
using namespace std;
bool fun(int w)
{
    if(w<=2)
{
    return false;
}
if(w%2==0)
{
   return true;
}
else{
   return false;
}

}
int main()
{
int w;
cin>>w;
if(fun(w))
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
