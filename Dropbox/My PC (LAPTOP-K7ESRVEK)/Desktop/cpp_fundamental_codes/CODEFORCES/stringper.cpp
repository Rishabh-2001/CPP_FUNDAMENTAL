#include <iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> permutation(string s)
{
      if(s.size()==0)
      {
          vector<string>output;
          output.push_back("");
          return output;
      }
       char key=s.at(0);
       string ros=s.substr(1);
      vector<string>rans=permutation(ros);
       vector<string>ans;

      for(string rss:rans)
      {
           for(int j=0;j<=rss.size();j++)
           {
              // string res=rss.substr(0,j)+key+rss.substr(j);
               string res=rss;
               res.insert(j,1,key);
               ans.push_back(res);
           }
      }
      return ans;
}

int main() {
    string s;
    cin>>s;
    vector<string>output;
    vector<string>out=permutation(s);
    cout<<"Permutation=s of the string are:"<<endl;
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<endl;
    }

    return 0;
}
