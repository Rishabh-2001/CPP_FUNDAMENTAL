#include<iostream>
#include<stack>
using namespace std;
//template<typename T>
bool isBalancedParanthesis(string str)
{
    stack<char>s;
    int i=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char a=str[i];
        if(a=='('||a=='{'||a=='[')
            {
                s.push(a);
            }
            else if(a==')'||a=='}'||a==']')
            {
                if(a==')')
                {
                    if(!s.empty()&&s.top()=='(')
                    {
                        s.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(a=='}')
                {
                    if(!s.empty()&&s.top()=='{')
                        {
                            s.pop();
                        }
                        else{
                            return false;
                        }
                }
                else if(a==']')
                {
                    if(!s.empty()&&s.top()=='[')
                    {
                        s.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    string str;
    cin>>str;
    bool ans=isBalancedParanthesis(str);
    if(ans)
    {
        cout<<"Balanced Paanthesis"<<endl;
    }
    else{
        cout<<"Unbalanced Paranthesis"<<endl;
    }
    return 0;
}

