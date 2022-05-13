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
    int*a=new int[n];
    int*ans=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    int k=0;

    while(l<=r)
    {
        if(k%2==0){
          ans[k]=a[l];
          k++;
          l++;
        }
        else{
            ans[k]=a[r];
            r--;
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;




    t--;
}


return 0;
}
