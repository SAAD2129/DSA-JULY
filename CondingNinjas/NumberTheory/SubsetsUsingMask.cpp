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


vii GenerateSubsets(vi &A,int n){

     int cntSubs = (1 << n);
     vii ans;
     rep( i, 0, cntSubs ) {
     
          vi temp;
          rep( j, 0, n ) {
          
               if(checkBit(i,j)){
                    temp.push_back(A[j]);
               }
          }
          ans.push_back(temp);
     }
     return ans;
}
bool compare(vi &A,vi &B){
     return A.size() < B.size();
}
int lcm(int a, int b){
     return (a*b) / __gcd(a,b);
}
int gcd(int a, int b){//12 18 
     return (b == 0) ? a : gcd(b,a%b);
}
//Driver Code 
signed main(){

     //taking input array
     int n;
     cin >> n;
     vi A(n);
     rep( i, 0, n )
         cin >> A[i];
     
     auto subsets = GenerateSubsets(A,n);
     // sort(subsets.begin(),subsets.end(),compare);
     for(auto i : subsets){
          for(auto j : i)
               cout << j << " ";
          cout  << endl;
     }
     cout << __gcd(12,18) << endl;
     cout << lcm(12,18) << endl;
     cout << gcd(12,18) << endl;

     return 0;
}