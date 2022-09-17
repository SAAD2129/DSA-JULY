#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;
void solve()
{

     int n;
     cin >> n;

     int *A = new int[n];
     int *B = new int[n];
     for (int i = 0; i < n; i++)
     {
          cin >> A[i];
     }
     for (int i = 0; i < n; i++)
     {
          cin >> B[i];
     }

     sort(A, A + n);
     sort(B, B + n);
     unordered_map<int,int> W;
     unordered_map<int,int> G;
     for (int i = 0; i < n; i++)
     {
          G[A[i]] = i;
     }
     for (int i = 0; i < n; i++)
     {
          W[B[i]] = i;
     }
     vector<int> Ans(n);
     for(auto i : G)
     {
          cout << i.second <<" ";
     }
     Ans.push_back(i.second);

     // map<int,int> ::iterator it = W.begin();
     // for (int i = 0; i < Ans.size(); i++)
     // {
     //      Ans[i] += it->second;
     //      it++;
     // }
     // for(auto i : Ans)
     //      cout << i  << " "; 

     // int ct = 0;
}
int main()
{

     int t;
     cin >> t;
     while (t--)
     {
          solve();
     }

     return 0;
}