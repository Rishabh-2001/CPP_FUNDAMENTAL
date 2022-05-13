#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    int e;
    int i,j;
    for(i=1;i<n;i++)
    {
        e=a[i];
        j=i-1;
        while(j>=0&&a[j]>e)
        {
          a[j+1]=a[j];
          j=j-1;

        }
        a[j+1]=e;
    }

}
int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elemetns:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    cout<<"Array after sort is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }

    return 0;
}

