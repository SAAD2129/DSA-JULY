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

//Driver Code 
signed main(){

     int t;
     cin >> t;
     while(t--) {
     
          int n;
          string s;
          cin >> n >> s;
          sort(s.begin(),s.end(),greater<int>());
          int p=0,m=0;
          for (int i = n - 1; i >= 0; i--)
          {
               if(s[i] == '-')
                    m++;
               else if(s[i] == '+')
                    p++;
               else
                    break;
          }

          int idx = n -(m+p);
          string ans = s.substr(0,idx);
          int ind = ans.size()-1;
          // cout << ans.substr(ind) << endl;
          while (m--){

               string temp = ans.substr(ind);
                              ans = ans.substr(0,ind);

               temp = '-' + temp;
               ans = ans + temp;
               ind--;
          }
          while (p--){

               string temp = ans.substr(ind);
               ans = ans.substr(0,ind);
               temp = '+' + temp;
               ans = ans + temp;
                              ind--;

          }
          cout << ans << endl;
     }

     return 0;
}