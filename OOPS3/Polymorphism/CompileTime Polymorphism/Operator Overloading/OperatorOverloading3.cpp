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


// Failing for f3=f1+f2;
//   void operator++(){
//     numerator=numerator+denominator;
//     simplify();
//   }

//Failing for ++(++f1), giving ++f1 as answer. 
//   Fraction operator++(){
//     numerator=numerator+denominator;
//     simplify();
//     return *this;
//   }

  Fraction& operator++(){
    numerator=numerator+denominator;
    simplify();
    return *this;
  }

//Post increment(no nesting is allowed in post increment operator)
      Fraction operator++(int) {
			Fraction fNew(numerator, denominator);
			numerator = numerator + denominator;
			simplify();
			fNew.simplify();
			return fNew;
		}

        Fraction& operator+=(Fraction const &f2){
            int lcm=denominator+f2.denominator;
            int x=lcm/denominator;
            int y=lcm/f2.denominator;

            int num=x*numerator+(y*f2.numerator);
            numerator=num;
            denominator=lcm;
            simplify();

            return *this;
        }
};

int main(){

  Fraction F1(10,2);
  Fraction F2(15,4);

  F1.print();
  ++F1;
  F1.print();

  Fraction F3=++F1;
  Fraction F4=++(++F2);
  F3.print();
  F4.print();

  Fraction F5=F1++;
  F5.print();
  F1.print();
  
  Fraction F6(10,20);
  Fraction F7(10,20);

  (F6+=F7)+=F7;
  F6.print();

}

// 10/2
// 6/1
// 7/1
// 23/4
// 7/1
// 8/1
// 31/21