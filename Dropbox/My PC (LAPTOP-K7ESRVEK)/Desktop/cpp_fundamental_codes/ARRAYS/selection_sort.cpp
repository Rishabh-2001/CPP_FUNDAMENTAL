#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
    int i,j;
    int min_idx=0;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
        }
        int t=a[min_idx];
        a[min_idx]=a[i];
        a[i]=t;
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
    selection_sort(a,n);
    cout<<"Array after sort is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }

    return 0;
}
