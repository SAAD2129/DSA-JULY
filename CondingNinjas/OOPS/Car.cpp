#include<bits/stdc++.h>


/****** SAAD a Peaceful soul ******/

using namespace std;

class Car {

     public:
     int gears;
     string color;
          //Constructors
          Car(){}
          Car(int gears,string color){
               this->gears = gears;
               this->color = color;
          }
          //Methods
          void printInfo(){

               cout << "noOfGear:" << gears
                    << "color:" << color;
          }
};


class RaceCar: public Car {
     int maxSpeed;
     public:
          //Constructors
          RaceCar(int gears,string color,int maxSpeed){
               this->gears = gears;
               this->color = color;
               this->maxSpeed = maxSpeed;
          }
          //Methods
          void printInfo(){

               cout << "noOfGear:" << gears << endl
               << "color:" << color << endl
               << "maxSpeed:"<< maxSpeed << endl;
               
          }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}