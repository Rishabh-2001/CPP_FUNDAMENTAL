#include<iostream>
#include<vector>
using namespace std;

void sum(int a[],int b[],int m,int n)
{
  long long int fnum=0;
  long long int snum=0;
   for(int i=0;i<m;i++)
   {
       fnum=fnum*10+a[i];
   }
   for(int i=0;i<n;i++)
   {
       snum=snum*10+b[i];
   }
  long long int ans=fnum+snum;
   cout<<ans<<endl;



}
int main()
{

    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    cout<<"Enter array elements (0 to 9) for ARRAY 1:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
     cout<<"Enter array elements (0 to 9) for ARRAY 2:"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>b[i];
     }
     sum(a,b,m,n);
     return 0;

}
