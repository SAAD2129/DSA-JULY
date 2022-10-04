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
vector<int> goodIndices(vector<int>& nums, int k) {
        
     int n = nums.size();
     vector<int> ans;
     //2,1,1,1,3,4,1
     for (int i = k; i < k+1; i++)// i < 5  i = 2 3 4 
     {
          int idx = k-1;//1
          //non increasing 
          bool nonincr = 0,incr = 0;
          int curridx = i-1;
          while(idx--){
               if(curridx == 0)
                    break;
               if(nums[curridx] <= nums[curridx-1]){
                    nonincr = 1;
               }else{
                    nonincr = 0;
               }
               
               curridx--;
          }
          // non decreasing
          idx = k;

          curridx = i;
          while (idx--){

               if(nums[curridx] <= nums[curridx+1]){
                    nonincr = 1;
                    // cout << curridx << endl;
               }else{
                    nonincr = 0;
               }
               curridx++;
          }
          // cout << nonincr << " " << incr << endl;
          if(nonincr && incr){
               ans.push_back(i);
          }
               cout << "hello";
     }
     
     return ans;
}

//Driver Code 
signed main(){

     vi nums = {2,1,1,1,3,4,1};
     int k = 2;
     for(auto j : goodIndices(nums,k)){


          cout << j << " ";
     }
}