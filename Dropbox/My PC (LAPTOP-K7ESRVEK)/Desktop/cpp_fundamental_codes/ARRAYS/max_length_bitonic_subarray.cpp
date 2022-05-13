#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cli=1;
    int mli=1;
    int cld=1;
    int mld=1;

    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            cli++;
        }
        else{
            cli=1;
            mli=max(cli,mli);
        }
    }
    cld=1;
    mld=1;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            cld++;
        }
        else{
            mld=max(cld,mld);
            cld=1;
        }
    }
    int maxlen=max(mli,mld);
    cout<<"Max length of bitonic array is:"<<maxlen<<endl;

}
