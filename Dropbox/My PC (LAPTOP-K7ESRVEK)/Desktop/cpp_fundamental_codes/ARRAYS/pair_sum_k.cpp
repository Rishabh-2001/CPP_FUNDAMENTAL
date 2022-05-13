#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    cout<<"Enter array in sorted way:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key value:"<<endl;
    int key;
    cin>>key;
    int l=0;
    int r=n-1;
    cout<<"pairs with sum "<<key<<" are: "<<endl;
    while(l<r)
    {
        int sum=a[l]+a[r];
        if(sum==key)
        {
            cout<<a[l]<<","<<a[r]<<endl;
            l++;
            r--;
        }
        else if(sum<key)
        {
            l++;
        }
        else {
            r--;
        }
    }


}
