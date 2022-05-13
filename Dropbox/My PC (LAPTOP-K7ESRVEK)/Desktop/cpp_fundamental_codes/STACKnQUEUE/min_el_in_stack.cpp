#include<iostream>
#include<stack>

using namespace std;
/*
 stack<int>s;
    stack<int>ss;
    void push(int e)
    {
         if(s.empty())
        {
          s.push(e);
          ss.push(e);
        }
        else{
              if(e<=ss.top())
                {
                    ss.push(e);
                    s.push(e);
                }
            else{
                s.push(e);
            }
        }
    }
    int pop()
    {
        if(s.empty())
        {
            return -1;
        }
        int ans;
        if(s.top()==ss.top())
        {
             ans=s.top();              //WITH O(n) SPACE
            s.pop();
            ss.pop();
        }
        else{
            ans=s.top();
            s.pop();
        }
        return ans;
    }

    int min_el()
    {
        if(ss.empty())
        {
            return -1;
        }
        else{
            return ss.top();
        }

    }


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       push(a[i]);
    }

    cout<<endl;
    cout<<endl;

    cout<<min_el()<<endl;
     cout<<pop()<<endl;
     cout<<min_el()<<endl;
     cout<<pop()<<endl;
     cout<<min_el()<<endl;


}
*/

stack<pair<int,int>>s;

void push(int e)
{
   if(s.empty())
   {
       s.push({e,e});
   }
   else{
    if(e<=s.top().second)
    {
        s.push({e,e});
    }
    else{
            int lm=s.top().second;
        s.push({e,lm});
    }
   }
}

int pop()
{
  if(s.empty())
  {
      return -1;
  }
  else{
       int ans=s.top().first;
       s.pop();
       return ans;
  }
}
int getMin()
{
    if(s.empty())
    {
        return -1;
    }
    else{
        return s.top().second;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       push(a[i]);
    }

      cout<<endl;
    cout<<endl;

    cout<<getMin()<<endl;
     cout<<pop()<<endl;
     cout<<getMin()<<endl;
     cout<<pop()<<endl;
     cout<<getMin()<<endl;



}

