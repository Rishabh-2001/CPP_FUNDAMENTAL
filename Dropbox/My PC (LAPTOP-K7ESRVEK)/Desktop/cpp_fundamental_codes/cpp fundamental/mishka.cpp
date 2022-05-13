#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cntm=0;
    int cntc=0;
    while(n>0)
    {
        int cm,cc;
        cin>>cm>>cc;
        if(cm>cc)
        {
            cntm++;
        }
        else if(cc>cm)
        {
            cntc++;
        }
        else{
            cntm++;
            cntc++;
        }
        n--;
    }
    if(cntm==cntc)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(cntm>cntc)
    {
        cout<<"Mishka"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }
    return 0;

}
