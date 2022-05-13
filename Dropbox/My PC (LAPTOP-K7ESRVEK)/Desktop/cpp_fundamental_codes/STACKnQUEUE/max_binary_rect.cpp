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
            while(!s.empty()&&s.top().first>key)
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
            while(!s.empty()&&s.top().first>key)
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
int MAHB(int a[100][100],int m,int n)
{
    int v[n];
    for(int j=0;j<n;j++)
    {
        v[j]=a[0][j];
    }

    int mx=MAH(v,n);

    for(int i=1;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                    if(a[i][j]==0)
                    {
                        v[j]=0;
                    }
                    else
                    {
                        v[j]=v[j]+a[i][j];
                    }
        }
         mx=max(mx,MAH(v,n));
    }
    return mx;
}
int main()
{
  int m,n;
  cin>>m>>n;
 int a[100][100];

  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>a[i][j];
      }
  }
  cout<<"Array is:"<<endl;
   for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
         cout<<a[i][j]<<"  ";
      }
      cout<<endl;
  }
  int an=MAHB(a,m,n);
  cout<<"Max area binary rect is :"<<an<<endl;

return 0;

}

