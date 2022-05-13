#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>NSL(int a[],int n)
{
    stack<pair<int,int>>s;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        if(s.empty())
        {
            s.push({key,i});
            ans.push_back(-1);
        }
        else if(s.top().first<key)
        {
            ans.push_back(s.top().second);
        }
        else if(s.top().first>key)
        {
            while(!s.empty()&&s.top().first>=key)
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({key,i});
    }
    return ans;
}

vector<int>NSR(int a[],int n)
{
    stack<pair<int,int>>s;
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        int key=a[i];
        if(s.empty())
        {
            s.push({key,i});
            ans.push_back(n);
        }
        else if(s.top().first<key)
        {
            ans.push_back(s.top().second);
        }
        else if(s.top().first>key)
        {
            while(!s.empty()&&s.top().first>=key)
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(n);
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({key,i});
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int MAH(int a[],int n)
{
  int ans=INT_MIN;
  vector<int>nsl=NSL(a,n);
  vector<int>nsr=NSR(a,n);
  cout<<"array:";
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<",";
  }
  cout<<endl;
    for(int i=0;i<nsl.size();i++)
  {
      cout<<nsl[i]<<",";
  }
  cout<<endl;
    for(int i=0;i<nsr.size();i++)
  {
      cout<<nsr[i]<<",";
  }
  cout<<endl;


  for(int i=0;i<n;i++)
  {
      int val=a[i];
      int w=nsr[i]-nsl[i]-1;
      int curr_ar=val*w;
      if(curr_ar>ans)
      {
          ans=curr_ar;
      }

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
    cout<<endl;
    int ans=MAH(a,n);
    cout<<"Max area histogram is:"<<ans<<endl;
    delete[] a;
    return 0;
}
