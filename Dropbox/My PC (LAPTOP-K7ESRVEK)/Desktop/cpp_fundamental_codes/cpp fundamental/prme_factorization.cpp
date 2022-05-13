/*
Prime Factorization Of A Number
1. You are required to display the prime factorization of a number.
    2. Take as input a number n.
    3. Print all its prime factors from smallest to largest.

    INTPUT:
       1440

    OUTPUT:
       2 2 2 2 2 3 3 5
       */
       #include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int d=2;d<=n;d++)
    {
        while(n%d==0)
        {
            cout<<d<<" ";
            n=n/d;
        }
    }

}
