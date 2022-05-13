#include<iostream>
using namespace std;

bool isSorted(int a[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(a[0]>a[1]){
            return false;
    }
    bool smallAns=isSorted(a+1,n-1);
    return smallAns;
}
int main()
{

    int n;
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(isSorted(arr,n))
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    delete[] arr;
    return 0;
}
