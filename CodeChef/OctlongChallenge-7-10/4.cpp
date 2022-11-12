#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vb vector<bool>
#define vii vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define SetBits(a) __builtin_popcount(a)
#define SetBitsll(a) __builtin_popcountll(a)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
     ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;
int ConvertToNumber(string s){
     int sum = 0;
     int base = 2;
     int idx = 0;
     for (int i = s.size() - 1; i >= 0; i--)
     {
          int num = int('1' - s[i]);
          num = !num;
          if(num){
               sum += pow(base,idx);
          }
              idx++;
     }
     return sum;
}
//Driver Code 
signed main(){


     int t;
     cin >> t;
     while(t--) {
     
          int n;
          cin >> n;

          string s;
          cin >> s;
          // cout << pow(0,0) << endl;
          int x =  ConvertToNumber(s);
          int y;
          int ans = INT_MIN;
          for (int i = 1; i <= x; i++){
               if(abs(x/(int)pow(2,i)) ^ x >= x){//
                    int temp = abs(x / (int)pow(2, i)) ^ x;
                    if(temp > ans){
                         ans = temp;
                         y=i;
                    }
               }
          }

          cout << y << endl;
          
     }     
}