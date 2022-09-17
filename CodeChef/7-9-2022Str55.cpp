#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;

//1048576
int main()
{

     int t;
     cin >> t;
     while (t--)
     {
          int x,y;
          cin >> x >> y;
          if(x == y)
          {
               cout << x << " " << y << " " << x <<endl;
          }
          else 
          {
               if(x%2==0){

                    cout << "0" << " " << y << " " << (y/3)+x+2 <<endl;
               }
               else{
                    cout << "0" << " " << y << " " << (y/3)+x+1 <<endl;
               }

          }
          
          // cout <<"ceir" << ceil(5/3) <<endl;
     }
     return 0;
}

