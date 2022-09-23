#include <bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vb vector<bool>
#define vii vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e6 + 3;
const int MOD = 1e9 + 7;

/*
 ***    Saad a Peaceful soul ⭐⭐⭐⭐⭐⭐⭐ 😁 Zindagi me maza Aana Chahye Bs  ***
 */

using namespace std;
vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
{

	vector<int> ans;

	int sum = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] % 2 == 0)
			sum += nums[i];
	}
	// sum = 6;
	int n = queries.size();
	for (int i = 0; i < n; ++i){

		int num = nums[queries[i][1]];
		nums[queries[i][1]] += queries[i][0];
		if(queries[i][0] < 0 && (abs(queries[i][0]) | 1)){
			sum += queries[i][0];
		}
		else if (nums[queries[i][1]] % 2 == 0){
			sum += nums[queries[i][1]];
		}
		else{
			if (num % 2 == 0)
				sum -= num;
		}
		// cout << sum << endl;
		ans.push_back(sum);
	}

	return ans;
}
// Driver Code
int main()
{

	vi nums = {1, 2, 3, 4};
	vii queries = {{1, 0}, {-3, 1}, {-4, 0}, {2, 3}};

	vi ans = sumEvenAfterQueries(nums, queries);
	for (auto j : ans)
		cout << j << " ";

	return 0;
}