#include<iostream>
#include<stack>
using namespace std;
bool check_redundant(string str)
{
    stack<char>s;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=')')
        {
            s.push(str[i]);
        }
        else{
            int cnt=0;
            while(!s.empty()&&s.top()!='(')
            {
                s.pop();
                cnt++;
            }
            if(cnt>0)
            {
                s.pop();

            }
            else if(cnt==0)
            {
                return true;
            }

        }


    }
    return false;


}
int main()
{
    string str;
    cin>>str;
    if(check_redundant(str))
    {
        cout<<"redundant brackets present"<<endl;
    }
    else{
        cout<<"redundant brackets not present"<<endl;
    }
    return 0;
}
