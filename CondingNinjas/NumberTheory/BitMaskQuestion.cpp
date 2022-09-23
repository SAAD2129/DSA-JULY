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
void PrintBinary(int n) {

     for (int i = log2(n); i >= 0; i--)
          cout << ((n >> i ) & 1);
     cout << endl;
}
int setBit(int n,int pos) {
     return (n | (1 << pos));
}
int unSetBit(int n,int pos) {
     return n & (~(1<<pos));
}
bool checkBit(int n,int pos) {
     return (n & (1 << pos));
}
int toggle(int n,int pos = 5) {
     return (n ^ (1 << pos));
}
bool isPower2(int n) {
     return !(n & (n-1));
}

int clearMsb(int n,int i){
     return (n & (~ ( ( 1<<(i+1) ) -1 ) ) );
}
//Driver Code 
signed main(){
     int n;
     cin >> n;

     vector<int> masks(n,0);
     rep( i, 0, n ) {
     
          int workers;
          cin >> workers;
          int mask = 0;
          rep( i, 0, workers ) {
          
               int day;
               cin >> day;
               mask = setBit(mask,day);
          }
          masks[i] = (mask);
     }
     // PrintBinary(number);
     int maxi = INT_MIN;
     cout << masks.size() << " size " << endl;
     rep( i, 0, n ) {
          
          rep( j, i+1, n ) {
          
               int intersect = (masks[i] & masks[j]);
               int commonDays = SetBits(intersect);
               maxi = max(commonDays,maxi);
               cout << i << " " << j << " " << commonDays << endl;
          }
          // PrintBinary(masks[i]);
     }

     cout << maxi << endl;
     return 0;
}