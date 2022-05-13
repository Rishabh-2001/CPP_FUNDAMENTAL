#include<iostream>
using namespace std;

void rev(int a[],int s,int r)
{
    while(s<r)
    {
        int t=a[s];
        a[s]=a[r];
        a[r]=t;
        s++;
        r--;
    }
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter d:"<<endl;
    cin>>d;
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
        l++;
        r--;
    }
    rev(a,0,n-d-1);
    rev(a,n-d,n-1);
    cout<<"Rotated array is:"<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
}


