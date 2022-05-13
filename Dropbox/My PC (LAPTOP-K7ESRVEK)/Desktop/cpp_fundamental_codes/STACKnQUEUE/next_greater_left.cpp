#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>NGL(int a[],int n)
{
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else if(s.top()>key)
        {
            ans.push_back(s.top());
        }
        else if(s.top()<key)
        {
            while(!s.empty()&&s.top()<key)
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else{
                ans.push_back(-1);
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
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    vector<int>ans=NGL(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<",";
    }
    return 0;
}
