#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int n;
    int m;
    cout<<"Enter size of arr1:"<<endl;
    cin>>m;
      cout<<"Enter size of arr2:"<<endl;
    cin>>n;
    int a[m];
    int b[n];
    cout<<"Enter array 1 elements:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
     cout<<"Enter array 2 elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+m);
    sort(b,b+n);
    int p=0;
    int q=0;
    cout<<"common elements are:"<<endl;
    while(p<m&&q<n)
    {
        if(a[p]==b[q])
        {
            cout<<a[p]<<",";
            p++;
            q++;
        }
        else if(a[p]<b[q])
        {
            p++;
        }
        else{
            q++;
        }

    }


}
