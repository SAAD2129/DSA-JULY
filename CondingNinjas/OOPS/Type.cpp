#include<bits/stdc++.h>


/****** SAAD a Peaceful soul ******/

using namespace std;

class Shape{

     public:
     string ShapeType;
     Shape(){}

     //Methods

     void PrintMyType(){
          cout << this->ShapeType << endl;
     }

};
class Rectangle : public Shape{

     public:
     int length;
     int breadth;
     //Methods
     Rectangle(int l,int b){
          this->length = l;
          this->breadth = b;
     }
     int CalculateArea(){
          cout << length * breadth << endl;
     }
};
class Square : public Shape{

     public:
     int length;
     Square(int len){
          this->length = len;
     }

     //Methods
     int CalculateArea(){
          cout << length * length << endl;
     }
};
signed main(){

     Square obj(5);
     obj.ShapeType = "square";
     obj.PrintMyType();
     obj.CalculateArea();
     Rectangle obj2(5,4);
     obj2.ShapeType = "rectangle";
     obj2.PrintMyType();
     obj2.CalculateArea();
}