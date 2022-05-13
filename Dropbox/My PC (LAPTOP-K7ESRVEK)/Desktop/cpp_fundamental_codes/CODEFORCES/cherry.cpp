#include<bits/stdc++.h>
using namespace std;
int mini(int a[],int si,int ei,int smx,int mx)
{
//    cout<<"STarting index:"<<si<<endl;
//    cout<<"Endign index:"<<ei<<endl;
    int mn=smx;
    unsigned long long int p=0;
    for(int i=si+1;i<ei;i++)
    {
            unsigned long long int cr=a[i]*mx;
            if(cr>p)
            {
                mn=a[i];
                cr=p;
            }
    }
//    cout<<"Return in gnmn value is:"<<mn<<endl;
    return mn;
}
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int*a=new int[n];
    int mx=-1;
    int mxi=-1;
    int smx=-1;
    int smxi=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }

    }
     for(int i=0;i<n;i++)
    {
        if(a[i]>smx)
        {
            if(i!=mxi)
            {
                smxi=i;
                smx=a[i];
            }
        }
    }

    int mn=mini(a,min(mxi,smxi),max(mxi,smxi),smx,mx);
//    cout<<"Multilying "<<mn<<" and "<<mx<<endl;
    unsigned long long int ans=(unsigned long long int)mn*mx;
    cout<<ans<<endl;

//   cout<<"MM:"<<(unsigned long long int)804745*473783<<endl;



    t--;
}


return 0;
}
