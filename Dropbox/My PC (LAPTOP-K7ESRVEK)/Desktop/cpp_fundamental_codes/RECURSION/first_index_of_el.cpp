#include<iostream>
using namespace std;

int findKey(int a[],int n,int key)
{
    if(n<=0)
    {
        return -1;
    }
    if(a[0]==key)
    {
        return 0;
    }
    int smallAns=findKey(a+1,n-1,key);
    if(smallAns==-1)
    {
        return -1;
    }
    else{
        return smallAns+1;
    }

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
    cout<<"Eter key"<<endl;
    int key;
    cin>>key;
    cout<<key<<" first found at index "<<findKey(arr,n,key)<<endl;
    delete []arr;
   return 0;
}
