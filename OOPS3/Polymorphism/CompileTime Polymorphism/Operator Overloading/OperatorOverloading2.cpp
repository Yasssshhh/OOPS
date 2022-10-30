#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Fraction{
  private:
  int numerator;
  int denominator;

  public:

  Fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
  }

  const int getNumerator(){
    return numerator;    
  }

  const int getDenominator(){
    return denominator;
  }

  int setNumerator(int n){
    numerator=n;
  }

  int setDenominator(int d){
    denominator=d;
  }

  void const print(){
    cout<<this->numerator<<"/"<<this->denominator<<endl;
  }


 Fraction const operator+(Fraction const& f2){
    int lcm=denominator*f2.denominator;
    int x=lcm/denominator;
    int y=lcm/f2.denominator;

    int num=((numerator*x) + (f2.numerator*y));

    Fraction fnew(num,lcm);
    fnew.simplify();
    return fnew;

    // numerator=num;
    // denominator=lcm;                 35/4       
    // simplify();                      15/4
    // return *this;                    35/4  
  }

   Fraction const operator*(Fraction const& f2){
     int num=numerator*f2.numerator;
     int den=denominator*f2.denominator;

    Fraction fnew(num,den);
    fnew.simplify();
    return fnew;
   }

  void simplify(){
    int gcd=1;
    int j=min(denominator,numerator);
    for(int i=1;i<=j;i++){
      if(this->numerator %i ==0  && this->denominator%i==0){
        gcd=i;
      }
    }
    denominator=denominator/gcd;
    numerator=numerator/gcd;
  }

  bool operator==(Fraction const &f2){
    return (numerator==f2.numerator && denominator==f2.denominator);
  }

};

// int main(){

//   Fraction F1(10,2);
//   Fraction F2(15,4);

//   //Previously we were updating F1 only, but now we want f3=f1.add(f2);
//   Fraction F3=F1.add(F2);
//   F1.print();
//   F2.print();
//   F3.print();
// }

// 10/2
// 15/4
// 35/4


//Now I want to build Fraction class such that I want F3=f1+f2 rather than F3=F1.add(F2).

int main(){

  Fraction F1(10,2);
  Fraction F2(15,4);

  Fraction F3=F1+F2;
  F1.print();
  F2.print();
  F3.print();

  (F1==F2) ? cout<<"true": cout<<"false";

  Fraction F4=F1*F2;
  F4.print();
}

// 10/2
// 15/4
// 35/4
// false
// 75/4