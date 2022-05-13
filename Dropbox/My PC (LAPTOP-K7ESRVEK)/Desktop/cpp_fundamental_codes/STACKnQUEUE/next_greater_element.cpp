#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>next_greater(int a[],int n)
{
    vector<int>ans;
    stack<int>s;

    for(int i=n-1;i>=0;i--)
    {
        int key=a[i];
        if(s.size()==0)
        {
            ans.push_back(-1);
        }
        else if(s.top()>key)
        {
            ans.push_back(s.top());
        }
        else if(s.size()>0&&s.top()<key)
        {
            while(s.size()>0&&s.top()<key)
            {
                s.pop();
            }
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top());
            }
        }
        s.push(key);
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    int*a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    vector<int>ans=next_greater(a,n);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<",";
    }
    cout<<endl;

}
