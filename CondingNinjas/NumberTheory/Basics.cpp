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
#define SetBitsll(aLL) __builtin_popcountll(aLL)
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


     // left shift << mutiply any number with two
     //mutliply 1 << n == 2^n;
     //right shift >> divide any number with two
     // cout << (16 >> 2) << endl;
     // 1000 using max 4 bits
     // max value in int can be 2^32 - 1 b/c 1 bit is for sign

     //Bit Manipulation
     string s;
     // cin >> s;
     // rep( i, 0, s.size() )
     //      s[i] = toggle(s[i]);
     // cout << s << endl;
     // //lower to upper
     // rep( i, 0, s.size() )
     //      s[i] = s[i] | ' ';
     // cout << s << endl;
     // rep( i, 0, s.size() )
     //      s[i] = s[i] & '_';
     // cout << s << endl;

     // for(char ch = 'A'; ch <= 'Z'; ++ch)
     //      PrintBinary(ch);
     // cout << endl << endl;

     // for(char ch = 'a'; ch <= 'z'; ++ch)
     //      PrintBinary(ch);


     // (checkBit(n,pos)) ? cout << "Setted bit" << endl : cout << "Not setted" << endl;

     /*
     important points
     any power of two's binary numbers -1 gives all ones till the zeros of that number
     like .. 
     2^ 4 = 16   binary --> 10000 -1 // 01111
     
     */

     int n;
     cin >> n;

     PrintBinary(n);
     int i = 1;
     n = (n & (~ ( ( 1<<(i+1) ) -1 ) ) );
     PrintBinary(n);
     return 0;
}