#include<iostream>
using namespace std;
       //       1 2 4 6 3 5   3    2    3     5
void merge_array(int a[],int l,int m,int e)
{
    if(l>=e)
    {
        return;
    }

    int size1=m-l+1;
    int*arr1=new int[size1];
    int size2=e-m;
    int*arr2=new int[size2];
    for(int i=0;i<size1;i++)
    {
        arr1[i]=a[l+i];
    }
    for(int i=0;i<size2;i++)
    {
        arr2[i]=a[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
     while(i<size1&&j<size2)
    {

        if(arr1[i]<=arr2[j])
        {
            a[k]=arr1[i];
            i++;
            k++;
        }
        else{
            a[k]=arr2[j];
            j++;
            k++;
        }
    }

    if(i==size1&&j<size2){
        while(j<size2)
    {
        a[k]=arr2[j];
        j++;
        k++;
    }
    }
    else if(j==size2&&i<size1)
    {
        while(i<size1)
        {
            a[k]=arr1[i];
            i++;
            k++;
        }
    }
    delete[]arr1;
    delete[]arr2;
    return;
}

void merge_sort_helper(int a[],int s,int e)
{

    if(s>=e)
    {
         return;
    }
    else{
    int m=(s+e)/2;
    merge_sort_helper(a,s,m);
    merge_sort_helper(a,m+1,e);
    merge_array(a,s,m,e);
    }

}
void merge_sort(int a[],int n)
{

   if(n<=0)
   {
       return;
   }
   merge_sort_helper(a,0,n-1);
   return;
}
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   for(int i=0;i<n;i++)
   {
   	  cin>>arr[i];
   }
   merge_sort(arr,n);

    for(int i=0;i<n;i++)
   {
   	  cout<<arr[i]<<",";
   }

   delete[]arr;
   return 0;
}
