#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }

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
    bubble_sort(a,n);
    cout<<"Array after sort is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }

    return 0;
}
