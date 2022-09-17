#include <bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vii vector<vi>
#define pii pair<int, int>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e6 + 3;
const int MOD = 1e9 + 7;

/*
    Saad a Peaceful soul 7 Star ==> Zindagi me maza Aana Chahye Bs
*/

using namespace std;

int SliderWindowTechnique(vi &A, int k){

    int n = A.size();
    int sum = 0;
    int ans = INT_MAX;
    int ct = 0;

    rep( i, 0, k ) {
    
        sum += A[i];
    }

    ans = min(ans, sum);

    rep(i, k, n - k + 1){
        sum += A[i] - A[i-k];
        ans = min(sum, ans);
    }

    return ans;
}

int SubArrayZeroSum(vi &A)
{

    map<int, int> count;
    int n = A.size();
    int prefixSum = 0;
    rep(i, 0, n)
    {

        prefixSum += A[i];
        count[prefixSum]++;
    }

    int ans = 0;
    map<int, int>::iterator it;
    for (it = count.begin(); it != count.end(); it++)
    {

        int c = it->ss;

        ans += (c * (c - 1)) / 2;

        if (it->ff == 0)
            ans += it->ss;
    }
    return ans;
}


void TopKFrequent(vi &A,int k,vector<pii> &ans){


    map<int,int> mp;

    rep( i, 0, A.size() ) {
    
        int sz = mp.size();
        if(mp[A[i]] == 0 && mp.size() == k+1)
            break;
        mp[A[i]]++;
    }
    // map<int,int
    for(auto i : mp)
    {
        if(i.ss != 0){
            pii p;
            p.ff = i.ff;
            p.ss = i.ss;
            ans.push_back(p);
        }
    }
}

int main()
{

    int n, k;
    cin >> n >> k;
    vi A(n);
    rep(i, 0, n)
    {

        cin >> A[i];
    }

    return 0;
}