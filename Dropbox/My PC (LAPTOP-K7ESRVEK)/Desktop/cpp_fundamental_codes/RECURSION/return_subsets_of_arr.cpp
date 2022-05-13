#include<iostream>
using namespace std;

void subsets(int a[],int n,int output[],int m)
{
    if(n==0)
    {
        cout<<"[";
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" , ";
        }
        cout<<"]"<<endl;
        return;
    }

    int *newOutput=new int[m];
    for(int i=0;i<m;i++)
    {
        newOutput[i]=output[i];
    }
    newOutput[m]=a[0];
    subsets(a+1,n-1,newOutput,m+1);
    subsets(a+1,n-1,output,m);
    delete[]newOutput;
    return;

}
int main()
{

    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int*output=new int[0];
    subsets(a,n,output,0);
    delete[]a;
    delete[]output;
    return 0;

}
