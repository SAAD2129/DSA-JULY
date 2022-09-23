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
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k)
{
    vector <int> ans;
    int maxi = INT_MIN;

    for(int i = 0; i < k; ++i){
        maxi = max(maxi, arr[i]);
    }
    ans.push_back(maxi);
    for(int i = k; i < n; ++i){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        ans.push_back(maxi);
    }
    return ans;
}

//Driver Code 
int main(){

    int n,k;
    cin >> n >> k;
    int *arr = new int[n];
    rep( i, 0, n ) {
    
        cin >> arr[i];
    }
    vi ans = max_of_subarrays(arr,n,k);
    for(auto i : ans)
        cout << i << " ";
    // pq.pop();
    return 0;
}