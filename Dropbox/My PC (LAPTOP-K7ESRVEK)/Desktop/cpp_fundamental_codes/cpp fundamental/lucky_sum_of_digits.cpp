#include<bits/stdc++.h>
using namespace std;
bool fun(int n,string out,int& val)
{
    if(val==n)
    {
        cout<<val<<endl;
        return true;
    }
    if(val>n)
    {
        return false;
    }
    val=val+4;
    int rans1=fun(n,out+"4",val);
    if(rans1==true)
    {
        return true;
    }
    else{
        return rans1;
    }
    val=val+7;
    int rans2=fun(n,out+"7",val);
    if(rans2==true)
    {
        return true;
    }
    else{
        return rans2;
    }


}
int main()
{
long int n;
cin>>n;
string out;
int val=0;
if(fun(n,out,val))
{

}
else{
    cout<<-1<<endl;
}

return 0;
}
