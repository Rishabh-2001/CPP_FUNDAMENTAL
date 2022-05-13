#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    int n;
    cin>>n;
    int big[n];
    int small[n];
    int l=2*n;
    int *a=new int[l];
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    sort(a,a+l);
    int i;
    for(i=0;i<n;i++)
    {
        small[i]=a[i];
    }

    int k=0;
    for(int j=l-1;j>=i;j--)
    {
        big[k]=a[j];
        k++;
    }

    int s=0;
    int e=n-1;
    int q=0;

   int cnt=0;
   while(q<2*n)
   {
       if(cnt%2==0)
       {
           a[q]=big[e];
           e--;
       }
       else{
        a[q]=small[s];
        s++;
       }
       q++;
       cnt++;
   }

    for(int i=0;i<2*n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    t--;
}

return 0;
}
