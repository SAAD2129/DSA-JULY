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

void reverseWord(string &s){

     for (int i = 0; i < s.size()/2; i++)
     {
          swap(s[i],s[s.size() - i -1]);   
     }
     
}
string reverseEachWord(string &input){

     int n = input.size();
     string ans;

     string word = "";
     for (int i = 0; i < n; i++)
     {
          char ch = input[i];
          if(ch == ' '){
               reverseWord(word);
               word +=" ";
               ans += word;
               word = "";
          }else{
               word +=ch;
          }
     }
     reverseWord(word);
     word +=" ";
     ans += word;
     return ans;
     
}

//Driver Code 
signed main(){

     string str;
     getline(cin, str);
     string ans = reverseEachWord(str);
     cout << ans << endl;
}