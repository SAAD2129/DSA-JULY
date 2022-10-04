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
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

     map<int,int> mp;
     for(int i = 0; i < heights.size(); ++i){

          mp[heights[i]] = i;

     }      
     int n = names.size();  
     vector<string > ans(n);
     int idx = n-1;
     for(auto j : mp){
          ans[idx--] = names[j.ss];
     }
     return ans;
}

//Driver Code 
signed main(){

     vs names = {"Alice","Bob","Bob"};
     vi heights = {155,185,150};
     for(auto j : sortPeople(names,heights)){

          cout << j << " ";
     }
     

}