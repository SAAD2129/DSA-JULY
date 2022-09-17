// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// int Mod = 1e9 + 7;
// const int N = 1e6 + 7;
// int dp[N];
// int Fact(int n)
// {
//      if (n == 0)
//           return 1;
//      if (dp[n] != -1)
//           return dp[n];
//      return dp[n] = n * Fact(n - 1);
// }

// int main()
// {
//      int t;
//      cin >> t;
//      while (t--)
//      {
//           memset(dp,-1,N);
//           int n;
//           int k;
//           cin >> n >> k;
//           string s;
//           cin >> s;
//           // cout << Fact(n) << endl;
//           cout << (Fact(n) / (Fact(n-k) * Fact(k))) << endl;
//      }

//      return 0;
// }
#include<bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
set<string> v;
void Permutations(string s,int idx)
{
     if(idx >= s.size())
          {
               // cout << s <<endl;/
               v.insert(s);
               return;
          }

     for (int i = idx; i < s.size(); i++)
     {
          swap(s[i],s[idx]);
          Permutations(s,idx+1);
          swap(s[i],s[idx]);
     }
     
}
int main(){

     cout<<"***************************************************\n\n";

     string s="110";
     Permutations(s,0);
     cout << v.size();

     for (auto &&i : v)
     {
               cout << i<<endl;
     }
     


     cout<<"\n\n***************************************************";

     return 0;
}