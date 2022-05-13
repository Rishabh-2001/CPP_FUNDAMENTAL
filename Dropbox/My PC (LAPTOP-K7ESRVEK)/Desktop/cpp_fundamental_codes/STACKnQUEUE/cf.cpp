#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>fun(int x[],int n,int price[],int q)

int main()
{
    int n;
    cin>>n;
    int*x=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
        int q;
    cout<<"enter q"<<endl;
    cin>>q;
    int *price=new int[q];
    for(int i=0;i<q;i++)
    {
        cin>>price[i];
    }
    sort(x,x+n);
    int*ans=new int[q];
    for(int i=0;i<q;i++)
    {
        int key=price[i];
        int cnt=0;

        for(int j=0;j<n;j++)
        {
            if(key>=x[j])
            {
                cnt++;
            }
            else{
                break;
            }
        }
        ans[i]=cnt;

    }

    cout<<"ans:"<<endl;

    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<endl;
    }

}

