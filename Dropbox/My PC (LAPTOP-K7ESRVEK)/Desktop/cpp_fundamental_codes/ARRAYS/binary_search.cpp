#include<iostream>
using namespace std;

int binary_srch(int a[],int n,int key)   // 9 1 2 3 5 7 10 11 12 15
{
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
    while(s<=e)
    {
        m=(s+e)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements in sorted order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the value of key to be searched: "<<endl;
    cin>>key;
    int ans=binary_srch(a,n,key);
    if(ans==-1)
    {
        cout<<"Element not found :)"<<endl;
    }
    else{
        cout<<"Element found at "<<ans+1<<" position"<<endl;
    }
    return 0;
}
