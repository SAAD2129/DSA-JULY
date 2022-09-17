#include <bits/stdc++.h>

/*
 *** Saad a Peaceful Soul ***
 */
using namespace std;

int maxSumSubArray(int arr[], int x, int k, int n)
{

    int sum = 0, ans = 0;

    // getting first window processed
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    // checking  if it is a valid window
    if (sum < x)
        ans = sum;

    // now we will slide the window
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if (sum < x)
        {
            ans = sum;
        }
    }
    cout << ans << endl;
    return ans;
}

// smallest subarray with sum greater than x
int smallestSubarray(int arr[], int n, int x)
{
    int sum = 0, minlen = n + 1, start = 0, end = 0;

    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n) // 2 < n
        {
            if (end - start < minlen) // 5-2
            {
                minlen = end - start;
            }
            sum -= arr[start++];
        }
    }
    cout << minlen << endl;
    return minlen;
}

void NumDivisible(int arr[], int n, int k)
{

    int sum = 0;
    pair<int, int> ans;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum % 3 == 0)
    {
        ans = {0, k - 1};
        return;
    }
    bool check = false;

    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if (sum % 3 == 0)
        {
            ans = {i - k + 1, i};
            check = true;
        }
    }
    if (check)
        cout << ans.first << " " << ans.second << endl;
    else
    {
        cout << "no found" << endl;
    }
}

bool isPalindrom(int n)
{

    int store = n;
    int num = 0;
    while (n > 0)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }

    return (store == num);
}
int isPalinSubarray(vector<int> arr, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }
    if (isPalindrom(num))
    {
        return 0;
    }

    for (int j = 0; j < arr.size(); j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[j];
        if (isPalindrom(num))
            return j - k + 1;
    }
    return -1;
}

bool isPerfectNum(int n){
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0){
            if(i == n/i){
                sum+=i;
            } else{
                sum += i + n/i;
            }
        }
    }
    if(sum == n && n != 1)
        return 1;
    return 0;
}
int maxSum(int arr[],int n,int k){

    if(n<k)
        return -1;
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res+=arr[i];
    }
    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum+=arr[i] - arr[i-k];
        res = max(sum,res);
    }
    return res;
}
int maxPerfectNumbers(int arr[],int n ,int k){
    for (int i = 0; i < n; i++)
    {
        if(isPerfectNum(arr[i])){
            arr[i] = 1;
        } else{
            arr[i] = 0;
        }
    }
    return maxSum(arr,n,k);
}
//Driver Code
int main()
{
    // vector<int> A{2, 3, 5, 1, 1, 5};
    // int k = 4;
    // int ans = isPalinSubarray(A, k);
    // if(ans == -1)
    //     cout << "none exist " << endl;

    // else
    // {
    //     for (int i = ans; i < ans+k; i++)
    //     {
    //         cout << A[i] << " ";
    //     }cout << endl;
        
    // }
    int arr[]= {28,2,3,6,496,99,8128,24};
    int k = 4;
    int n = 8;
    cout << maxPerfectNumbers(arr,n,k) << endl;
    return 0;
}