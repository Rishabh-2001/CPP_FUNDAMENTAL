#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
    string s;
    cin>>s;
    if(s.length()%2==0)
    {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            char y=s[i];
            sum+=y-96;
        }
        cout<<"Alice "<<sum<<endl;
    }
    else{
        int p=s[0]-96;
        int q=s[s.length()-1]-96;

        if(p>q)
        {
           int asum=0;
           for(int i=0;i<s.length()-1;i++)
            {
                char y=s[i];
                asum=asum+(y-96);
            }
            int bsum=s[s.length()-1]-96;
           if(asum>bsum)
           {
               cout<<"Alice "<<asum-bsum<<endl;
           }
           else{
            cout<<"Bob "<<bsum-asum<<endl;
           }
        }
        else if(p<q)
        {
            int asum=0;
           for(int i=1;i<s.length();i++)
            {
                char y=s[i];
                asum+=y-96;
            }
            int bsum=s[0]-96;
           if(asum>bsum)
           {
               cout<<"Alice "<<asum-bsum<<endl;
           }
           else{
            cout<<"Bob "<<bsum-asum<<endl;
           }
        }
        else{


        int op1=0;
        int op2=0;
        for(int i=0;i<s.length()-1;i++)
        {

            char o=s[i];
            op1+=o-96;
        }
         op2=s[s.length()-1]-96;
          if(op1>op2)
           {
               cout<<"Alice "<<op1-op2<<endl;
           }
           else{
            cout<<"Bob "<<op2-op1<<endl;
           }

//                int k=0;
//                int l=0;
//                int r=s.length()-1;
//            while(p==q&&l<r)
//            {
//                 int p=s[k]-96;
//                 int q=s[s.length()-1-k]-96;
//                 k++;
//                 l++;
//                 r--;
//            }
//            if(l==r)
//            {
//
//            }
//            else if(p>q)
//            {
//                 int asum=0;
//                for(int i=k;i<s.length();i++)
//                {
//                    char y=s[i];
//                    asum+=y-96;
//                }
//                int bsum=0;
//                for(int i=0;i<k;i++)
//                {
//                    char z=s[i];
//                    bsum+=z-96;
//                }
//
//               if(asum>bsum)
//               {
//                   cout<<"ALICE "<<asum-bsum<<endl;
//               }
//               else{
//                cout<<"BOB "<<bsum-asum<<endl;
//               }
//            }
//            else{
//                    int asum=0;
//            int i;
//                for(int i=0;i<s.length()-k;i++)
//                {
//                    char y=s[i];
//                    asum+=y-96;
//                }
//                int bsum=0;
//                for(int f=i;f<s.length();f++)
//                {
//                    char z=s[f];
//                    bsum+=z-96;
//                }
//
//               if(asum>bsum)
//               {
//                   cout<<"ALICE "<<asum-bsum<<endl;
//               }
//               else{
//                cout<<"BOB "<<bsum-asum<<endl;
//               }
//
//            }
        }
    }





    t--;
}


return 0;
}
