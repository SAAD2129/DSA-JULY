#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
// MODIFIED BINARY SEARCH
int modiBst(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s + (e-s) /2;
        if (key == arr[mid])
            return mid;

        if (arr[s] <= arr[mid]){
            if (key >= arr[s] && key < arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        else{
            if (key > arr[mid] && key <= arr[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
}

int main()

{
    unordered_set<int> s;

    // int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    // int n = sizeof(arr) / sizeof(int);
    // cout << modiBst(arr, n, 10);
    return 0;
}
