#include<iostream>
using namespace std;
class fraction{
 private:
     int numerator;
     int denominator;
 public:
     fraction(int num,int den)
    {
        this->numerator=num;
        this->denominator=den;
    }
    void print()
    {
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void simplify()
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0)
            {
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;

    }
    fraction operator+(fraction const &f)const
    {
        int num1=this->numerator;
        int num2=f.numerator;
        int den1=this->denominator;
        int den2=f.denominator;
        int lcm=den1*den2;
        num1=(lcm/den1)*num1;
        num2=(lcm/den2)*num2;
        num1=num1+num2;
        den1=lcm;
        fraction fnew(num1,den1);
        fnew.simplify();
        return fnew;
    }
    fraction operator*(fraction const &f)const
    {
         int num1=this->numerator;
        int num2=f.numerator;
        int den1=this->denominator;
        int den2=f.denominator;
        num1=num1*num2;
        den1=den1*den2;
        fraction fnew(num1,den1);
        fnew.simplify();
        return fnew;
    }
    fraction&  operator++(){
       this->numerator=this->numerator+this->denominator;
       simplify();
       return *this;
    }
    fraction operator++(int){
      fraction fnew(numerator,denominator);
      numerator=numerator+denominator;
      simplify();
      fnew.simplify();
      return fnew;
    }
};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    cout<<"Fraction 1:";
    f1.print();
    cout<<"Fraction 2:";
    f2.print();
    cout<<"Sum: ";
    fraction f3=f1+f2;
    f1.print();
    f2.print();
    f3.print();
    cout<<"Product: ";
    fraction f4=f1*f2;
    f1.print();
    f2.print();
    f4.print();
   fraction f5=++(++f1);
    f1.print();
    f5.print();

    return 0;

}
