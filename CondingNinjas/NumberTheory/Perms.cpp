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

bool printVec(vi &A){


     rep( i, 0, A.size()) {
          // if(abs (A[i] - A[i+1]) < 2)
          //      return 0;
          cout << A[i] << " ";
     }
     return 1;
}

//Driver Code 
signed main(){

     int t;
     cin >> t;
     while(t--) {
     
          int n;
          cin >> n;
          vi A(n);

          rep( i, 0, n )
              A[i] = i+1;
          vi temp;
          // 1 2 3 4 5 6
          for (int i = 0; i < 2; i++)
          {
               for (int j = i; j < n; j+=2)
               {
                    temp.push_back(A[j]);
               }
          }
          for (int i = 0; i < n/2; i++)
          {
               swap(temp[i],temp[n-i-1]);
          }
          // 1 3 5 2 7 4 9 6 11 8 10  
          if(n < 4)
               cout << "-1" << endl;
          else{
               if(n == 4){
                    swap(temp[0],temp[1]);
                    swap(temp[2],temp[3]);
               }
                    printVec(temp);
          }
          // 2 4 1 3
          // cout << "NewTest case "<<endl;
     }
     
}