#include<iostream>
#include<stack>
using namespace std;
int count_reversal(string str)
{
    stack<char>s;
    if(str.length()%2==1)
    {
        return -1;
    }

    int ans=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char key=str[i];
        if(key=='{')
            {
                s.push(key);
            }
            else if(key=='}'&&s.empty())
            {
                s.push(key);
            }
            else if(key=='}'&&!s.empty())
            {

                if(s.top()=='{')
                    {
                        s.pop();
                    }
                    else{
                        s.push(key);
                    }

            }
    }
    if(!s.empty())
    {
        char c1=s.top();
        s.pop();
        char c2=s.top();
        s.pop();
        if(c1==c2)
        {
                ans=ans+1;
        }
        else if(c1!=c2)
        {
            ans=ans+2;
        }

    }
    return ans;
}

int main()
{
    string str;
    cin>>str;
    int ans=count_reversal(str);
    cout<<"count required: "<<ans<<endl;
    return 0;

}
