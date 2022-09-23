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

vector<int> countDistinctElements(vector<int> &arr, int k)
{
    unordered_set<int> st;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        st.insert(arr[i]);
    }
    ans.push_back(st.size());
    int idx = k; //
    for (int i = 0; i < arr.size() - k; i++)
    {
        if (st.size() >= k)
        {
            st.erase(arr[idx - k]);
        }
        st.insert(arr[idx]);
        ans.push_back(st.size());
        idx++;
    }

    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        vector<int> ans = countDistinctElements(A, k);
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}