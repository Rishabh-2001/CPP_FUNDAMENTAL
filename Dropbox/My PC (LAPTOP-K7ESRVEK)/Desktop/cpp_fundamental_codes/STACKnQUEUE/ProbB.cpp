#include<iostrem>
using namespace std;
int main()
{
    int nog;
    cin>>nog;
    int*students=new int[nog];
    for(int i=0;i<nog;i++)
    {
        cin>>students[i];
    }

    int no4=0;
    int no3=0;
    int no2=0;
    int no1=0;
    for(int i=0;i<nog;i++)
    {
        if(students[i]==4)
        {
            no4++;
        }
        else if(students[i]==3)
        {
            no3++;
        }
        else if(students[i]==2)
        {
            no2++;
        }
        else if(students[i]==1)
        {
            no1++;
        }
    }
    int req=0;
    req=req+no4;
    no4=0;
    int mn=min(no3,no1);
    req=req+mn;
    no3=no3-mn;
    no1=no1-mn;
    if(no3!=0)
    {
        req=req+no3;
        no3=0;
    }
    int rem=0;
    if(no2%2==0)
    {
        int div=no2/2;
        req=req+div;
        no2=0;
    }
    else{
        int div=no2/2;
         rem=no2%2;
        req=req+div;
    }
    if(no1>=4)
    {
        int div=no1/4;
        int rem1=no1%4;
        req=req+div;
       if(rem1<=3)
        {
            int div1=rem1/2;
            int rem11=rem1%2;
            req=req+div1+rem;
            req=req+rem11;
        }
        else{
            req++;
        }
    }
    else{

          int div1=no1/2;
            int rem11=no1%2;
            req=req+div1+rem;
            if(rem11!=0){
            req=req+rem11;
            }
    }
    cout<<req<<endl;


}
