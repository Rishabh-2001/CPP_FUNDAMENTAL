#include<bits/stdc++.h>
using namespace std;
class ar{
private:
    int*a;
    int len=0;
public:
    ar(int n)
    {
        a=new int[n];
        len=n;
        for(int i=0;i<n;i++)
        {

            a[i]=4;
        }
    }
    void display()
    {
        cout<<"Araay is:"<<endl;
        for(int i=0;i<len;i++)
        {

            cout<<a[i]<<",";
        }

    }
    };
int main()
{

ar a(5);
a.display();

return 0;
}
