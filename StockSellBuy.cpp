#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
// FOR MULTIPLE STOCKS
int MaxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}
// FOR ONE STOCK 
int stockBuy(int arr[],int n){
    int minSofar = INT_MAX;
    int maxProfit = 0;
    minSofar = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxProfit = max(maxProfit, arr[i] - minSofar);
        minSofar = min(minSofar, arr[i]);
    }
   return maxProfit;
}
int main()
{

    
    int arr[] = {3, 1, 4, 8, 7, 2, 5};
    int n = sizeof(arr) / sizeof(int);

 
    cout<<MaxProfit(arr,n);

    return 0;
}
