#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
// MODIFIED BINARY SEARCH
// int modiBst(int a[], int n, int key)
// {
//     int l = 0;
//     int h = n - 1;//9 // {5, 6, 7, 8, 9, 10, 1, 2, 3}
//     //3 5 1 2 0 <=3 6
//     while (l <= h) // 0<=9
//     {
//         int mid = (l + h) / 2; //
//         if (a[mid] == key)     // 10
//             return mid;
//         if (a[mid] > a[l]) // 3
//         {
//             if (key >= a[l] && key < a[mid])
//                 h = mid - 1;
//             else
//                 l = mid + 1; // 6
//         }
//         else
//         {
//             if (key > a[mid] && key <= a[h])
//                 l = mid + 1; // l=4
//             else
//                 h = mid - 1;
//         }
//     }
//     return -1;
// }


int main()

{
    unordered_set<int> s;
    
    // int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    // int n = sizeof(arr) / sizeof(int);
    // cout << modiBst(arr, n, 10);
    return 0;
}
