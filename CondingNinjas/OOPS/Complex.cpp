#include<bits/stdc++.h>


/****** SAAD a Peaceful soul ******/

using namespace std;
class ComplexNumbers{

     int real,imaginary;
     public:
     ComplexNumbers(int real,int image){
          this->real= real;
          this->imaginary = image;
     }
     void plus(ComplexNumbers c2){
          this->real = c2.real + this->real;
          this->imaginary = c2.imaginary + this->imaginary;
     }
     void print(){
          cout << real << " + i" << imaginary << endl;
     }

     //(ac - bd) + i(ad + bc).
     void multiply(ComplexNumbers c2){
          int rpart = (c2.real * this->real) - (this->imaginary * c2.imaginary);
          int ipart = (c2.imaginary * this->real) + (this->imaginary * c2.real);
          this->real = rpart;
          this->imaginary = ipart;
          
     }
     // 
};
signed main(){

     int real1, imaginary1, real2, imaginary2;

     cin >> real1 >> imaginary1;
     cin >> real2 >> imaginary2;

     ComplexNumbers c1(real1, imaginary1);
     ComplexNumbers c2(real2, imaginary2);

     int choice;
     cin >> choice;

     if (choice == 1) {
          c1.plus(c2);
          c1.print();
     } else if (choice == 2) {
          c1.multiply(c2);
          c1.print();
     } else {
          return 0;
     }

}