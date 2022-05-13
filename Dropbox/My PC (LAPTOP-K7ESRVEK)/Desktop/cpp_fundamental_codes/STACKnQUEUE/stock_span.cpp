#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stock_span(int a[],int n)
{
    stack<pair<int,int>>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        if(s.empty())
        {
             s.push({key,i});
             ans.push_back(1);
        }
        else if(s.top().first>key)
        {
            ans.push_back(i-s.top().second);
        }
        else if(s.top().first<key)
        {
            while(!s.empty()&&s.top().first<key)
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(i);


            }
            else{
                ans.push_back(i-s.top().second);

            }

        }
        s.push({key,i});
    }
    return ans;
}
int main(){
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
    cout<<endl;
    vector<int>ans=stock_span(a,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<",";
    }
    cout<<endl;
    delete[]a;

return 0;
}
