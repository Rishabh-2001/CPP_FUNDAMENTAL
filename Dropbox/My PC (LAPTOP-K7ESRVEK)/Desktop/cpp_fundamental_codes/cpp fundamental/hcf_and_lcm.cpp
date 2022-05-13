/*
  HCF AND LCM
  1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
3. Take input "num1" and "num2" as the two numbers.
4. Print their GCD and LCM.

INPUT:
   24 36

OUTPUT:
   12 72

   */
   #include <iostream>
#include<climits>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int a=max(num1,num2);
    int b=min(num1,num2);
    int r=INT_MAX;
    int hcf;
    int lcm;

    while(r!=0)
    {
        r=a%b;
        if(r==0)
        {
            hcf=b;
            break;
        }
        else
        {
            a=b;
            b=r;
        }
    }

    if(r==0)
    {
        hcf=b;
    }
    lcm=(num1*num2)/hcf;
    cout<<hcf<<endl;
    cout<<lcm<<endl;


    //write your code here

}
