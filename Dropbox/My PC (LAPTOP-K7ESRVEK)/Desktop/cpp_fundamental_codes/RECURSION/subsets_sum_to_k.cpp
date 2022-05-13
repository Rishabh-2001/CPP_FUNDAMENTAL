#include<iostream>
using namespace std;

void subsetSumK(int a[],int n,int key,int output[],int m)
{
    if(n==0)
    {
        if(key==0){
            for(int i=0;i<m;i++)
            {
                cout<<output[i]<<",";
            }
            cout<<endl;
            return;
        }
        else{
            return ;
        }
    }
    int *newOutput=new int[m];
    for(int i=0;i<m;i++)
    {
        newOutput[i]=output[i];
    }
    newOutput[m]=a[0];
    subsetSumK(a+1,n-1,key-a[0],newOutput,m+1);
    subsetSumK(a+1,n-1,key,output,m);
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
    int key;
    cout<<"Enter key element:"<<endl;
    cin>>key;
    int *output=new int[0];
    subsetSumK(a,n,key,output,0);
    delete[]a;
    delete[]output;
    return 0;


}
