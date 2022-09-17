#include<bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;

int CountZeros(int n) {
     int newnum = 1;
     while (n>0){
          int rem = n%10;
          newnum = newnum * rem;
          n/=10;
     }
     if(newnum == 0)
          return 1;
     int ct = 0;
     while(newnum>0) {
          int rem = newnum%10;
          if(rem == 0)
               ct++;
          else {
               return ct;
          }
          newnum/=10;
     }
     return ct;
}
void solve(){

     int a,b;
     cin >> a >> b;
     int sum = 0;
     // a = a%5 
     a+= 5 - (a%5);
     // cout << a << endl;
     for (int i = a; i <=b; i+=5){
          cout << i << endl;
          if(i > 9){
               
               sum+= CountZeros(i);
          }
     }
     cout << sum <<endl;
}
int main(){

     
          solve();
     
     // cout << CountZeros(10005000) << endl;

     return 0;
}