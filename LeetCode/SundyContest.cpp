// // #include <bits/stdc++.h>

// // /****** SAAD a Peaceful soul ******/
// //Question 1
// // using namespace std;
// // int mostFrequentEven(vector<int> &nums)
// // {
// //      unordered_map<int, int> count;

// //      for (int i = 0; i < nums.size(); ++i)
// //      {

// //           count[nums[i]]++;
// //      }
// //      int ans = -1;
// //      int maxi = INT_MIN;
// //      for(auto i : count){

// //           if(i.second > maxi && !(i.first &1 )){
// //                ans = i.first;
// //                maxi = i.second;
// //           }
// //           else if(i.second == maxi && !(i.first &1 )){

// //                if(ans > i.first){
// //                     ans = i.first;
// //                }
// //           }

// //      }
// //      return ans;
// // }
// // int main()
// // {

// //      int n;
// //      cin >>n;
// //      vector<int> ve(n);
// //      for (int i = 0; i < n; i++)
// //      {
// //                cin >> ve[i];
// //      }
// //      cout <<mostFrequentEven(ve) << endl;
// //      return 0;
// // }
// #include<bits/stdc++.h>

// /****** SAAD a Peaceful soul ******/

// using namespace std;
// int minGroups(vector<vector<int>>& intervals) {

//     unordered_map< int,int>pairs;
//     sort(intervals.begin(),intervals.end());
//     int groups = 0;
//     bool check = true;
//      for(int i = 0; i < intervals.size()-1; i++){
//           if(intervals[i][1] < intervals[i+1][0]){
//                groups++;
//                check = false;
//           }
//           if(check){
//                groups++;
//           }
//           // pairs.insert({intervals[i][0],intervals[i][1]});
//      }
//      cout << groups << endl;
//      // pairs.cou
//      // for(auto i : pairs)
//      //      cout << i.first << " " << i.second << endl;
// }
// int lengthOfLIS(vector<int>& nums, int k) {

//      int n = nums.size();
//      vector<int> dp(n, 1);
//      int ans = 1;
//      set<int> st;
//      sort(nums.begin(),nums.end());
//      for (int i = 0; i < n; i++) {
//           for (int j = i; j < n; j++)
//           {
//                if(nums[j] - nums[i] <= k)
//                {
//                     st.insert(nums[j]);
//                }
//           }

//      }
//      vector<int> temp;
//      for(auto i : st){
//           temp.push_back(i);
//      }
//      temp.erase(1,1);
//      for(auto i : temp){
//           cout << i << ' ';
//      }
//      return st.size();
// }

// int main(){

//      int n;
//      cin >> n;
//      int k = 1;
//      vector<int> v(n);
//      for (int i = 0; i < n; i++)
//      {
//           cin >> v[i];
//      }
//      cout << lengthOfLIS(v, k) << endl;
//      // minGroups(v);
//      return 0;
// }
#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;
void solve(int n, vector<long long> &ans)
{

     long long first = 1;
     long long second = 1;
     if (n >= 2)
     {
          ans.push_back(first);
          ans.push_back(second);
     }
     else
     {
          ans.push_back(first);
     }
     for (int i = 2; i < n; ++i)
     { // 5
          long long third = first + second;
          first = second;
          second = third;
          ans.push_back(third);
     }
}
vector<long long> printFibb(int n)
{
     vector<long long> ans;
     solve(n, ans);
     for(auto i : ans){
          cout << i << " ";
     }
     // return ans;/

}
int main()
{
     int R = 4, C = 5,
     mat[][C] = {{'S','N','B','S','N'},
       {'B','A','K','E','A'},
       {'B','K','B','B','K'},
       {'S','E','B','S','E'}};

       map<char,int> mp;
       for (int i = 0; i < R; i++)
       {
          for (int j = 0; j < C; j++)
          {
               
               mp[mat[i][j]]++;
          }
          
       }
       
       for(auto i : mp)
       {
          cout << i.first <<" " <<i.second <<endl;
       }
     return 0;
}