#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    cout<<"Largest element : "<<largest<<endl;
    cout<<"smallest element : "<<smallest<<endl;
    return 0;
}
