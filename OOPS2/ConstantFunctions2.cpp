// Constant member functions are those functions 
// that are denied permission to change the values of the data members of their class.
// When a function is declared as const, it can be called on any type of object, const object as well as non-const objects.
#include<iostream>
using namespace std;

class Fraction{
  private:
  int numerator;
  int denominator;

  public:
  Fraction() {
			
	}

  Fraction(int numerator,int denominator){
    this->numerator=numerator;
    this->denominator=denominator;
  }

  int getNumerator() const {
    return numerator;    
  }

  int getDenominator() const{
    return denominator;
  }

  int setNumerator(int n){
    numerator=n;
  }

  int setDenominator(int d){
    denominator=d;
  }

  const void print(){
    cout<<this->numerator<<"/"<<this->denominator<<endl;
  }

  void add(Fraction const& f2){
    int lcm=denominator*f2.denominator;
    int x=lcm/denominator;
    int y=lcm/f2.denominator;

    int num=((numerator*x) + (f2.numerator*y));

    numerator=num;
    denominator=lcm;

    simplify();
  }

  void multiply(Fraction const& f2){
  numerator=numerator*f2.numerator;
  denominator=denominator*f2.denominator;
  
  simplify();    
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
};

int main(){

  Fraction F1(10,2);
  Fraction F2(15,4);

  F1.add(F2);

  F1.print();

  F2.print();
  F1.multiply(F2);
  F1.print();
  F2.print();

  Fraction const f3;
  // f3.add(F2); error
  f3.getNumerator();
 
}