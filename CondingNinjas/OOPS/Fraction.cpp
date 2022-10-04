#include<bits/stdc++.h>


/****** SAAD a Peaceful soul ******/

using namespace std;

class Fraction {

     int numerator,denominator;

     public:
     Fraction(int n,int d){
          this->denominator = d;
          this->numerator = n;
     }
     void Multiply(int n,int d){

          int newNom = n * this->numerator;
          int newDeno = d * this->denominator;
          int gcd = __gcd(n,d);
          this->numerator = newNom/gcd;
          this->denominator = newDeno / gcd;
          this->Simplify();

     }
     void Print(){
          cout << this->numerator  << "/" << this->denominator << endl;
     }
     void Add(int n, int d){

          int lcm =( d * this->denominator) /__gcd(this->denominator,d);
          int numleft = this->numerator * (lcm / this->denominator );
          int numright = n * (lcm/d);
          int result = numleft + numright;

          int gcd = __gcd(result,lcm);
          this->numerator = result/gcd;
          this->denominator = lcm/gcd;
          this->Simplify();
     }
     void Simplify(){

          int gcd = __gcd(this->denominator,this->numerator);
          this->numerator /= gcd;
          this->denominator /= gcd;
     }
};

signed main(){

     int n,d;// 3/5 * 4 /5 12 /25
     cin >> n >> d;
     Fraction obj(n,d);
     int q;
     cin >> q;
     while (q--){
          int type,b,c;
          cin >> type >> b >> c;
          
          switch (type){
               
          case 1:
               obj.Add(b,c);
               obj.Print();
               break;
          case 2:
               obj.Multiply(b,c);
               obj.Print();
               break;
          
          default:
               cout << "Error" << endl;
               break;
          }
     }
}