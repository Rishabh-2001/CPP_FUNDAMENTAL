#include<iostream>
using namespace std;

int linear_search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key to be searched:"<<endl;
    int key;
    cin>>key;
    int ans=linear_search(a,n,key);
    if(ans==-1)
    {
        cout<<"Element not found :)"<<endl;
    }
    else{
        cout<<"Element found at "<<ans+1<<" position"<<endl;
    }
    return 0;
}
