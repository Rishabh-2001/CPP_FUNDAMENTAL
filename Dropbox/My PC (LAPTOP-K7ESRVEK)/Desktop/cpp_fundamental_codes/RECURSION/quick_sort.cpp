#include<iostream>
using namespace std;

int partition_fun(int a[],int s,int e)
{

    int key=a[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=key)
        {
            cnt++;
        }
    }
    int t=a[s];
    a[s]=a[s+cnt];
    a[s+cnt]=t;
     int c=s+cnt;
    int l=s;
    int r=e;
    while(l<c&&r>c)
    {
        if(a[l]<key&&a[r]>key)
        {
            l++;
            r--;
        }
        else if(a[l]>key&&a[r]>key)
        {

            while(a[r]>key)
            {
                r--;
            }
            if(r>c)
            {
                if(a[r]<key)
                {
                    int t=a[r];
                    a[r]=a[l];
                    a[l]=t;
                    l++;
                    r--;
                }
            }
            else{
                break;
            }
        }

        else if(a[l]>key&&a[r]<key)
        {
            int t=a[r];
             a[r]=a[l];
             a[l]=t;
             l++;
             r--;
        }
        else if(a[l]<key&&a[r]<key)
        {
            while(a[l]<key)
            {
                l++;
            }
            if(l<c)
            {
                if(a[l]>key)
                {
                    int t=a[l];
                    a[l]=a[r];
                    a[r]=t;
                    l++;
                    r--;
                }
            }
            else{
                break;
            }
        }


    }

    return c;
}

void quick_sort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int c=partition_fun(a,s,e);
    quick_sort(a,s,c-1);
    quick_sort(a,c+1,e);
    return ;
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
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[]arr;
    return 0;

}


