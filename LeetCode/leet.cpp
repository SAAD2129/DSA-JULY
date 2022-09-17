#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;

void solve(vector<int> &Arr, int target)
{

     map<int, int> mp;
     int n = Arr.size();
     for (int i = 0; i < n; i++){
          mp[i] = Arr[i];
     }
     vector<int> ans;
     for(auto i : mp)
          cout << i.second <<" " << i.first << endl;
     for (int i = 0; i < n; i++)
     {
          // if (mp.count(target - Arr[i]))
          // {
          //      cout  << mp[target - Arr[i]] << endl;
          //      // if (mp[Arr[i]] != mp[target - Arr[i]])
          //      // {

          //      //      ans.push_back(mp[Arr[i]]);
          //      //      ans.push_back(mp[target - Arr[i]]);
          //      //      break;
          //      //      // return ans;
          //      // }
          // }
          cout << mp[Arr[i]] << ' ' ;
     }
     // for(auto i : ans)
     //      cout <<i << " ";
}
int main()
{

     int n;
     int target;
     cin >> n >> target;
     vector<int> A(n);
     for (int i = 0; i < n; i++)
     {
          cin >> A[i];
     }
     solve(A, target);

     return 0;
}