#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int nop=0;
    int uc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            nop+=a[i];
        }
        else if(nop<1&&a[i]<0)
        {
           uc++;
        }
        else if(nop>=1&&a[i]<0)
        {
            nop--;
        }
    }
    cout<<uc<<endl;
    delete[]a;

return 0;
}
