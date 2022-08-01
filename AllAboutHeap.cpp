// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// // SWAPPING VARIABLES
// // void Swap(int arr[], int i, int j)
// // {
// //     int t = arr[i];
// //     arr[i] = arr[j];
// //     arr[j] = t;
// // }

// // INSERTION IN MAX HEAP FUNCTION
// //  void Insertion(int a[], int n, int val)
// //  {
// //      int i = n;
// //      a.push_back(val);
// //      while (i > 1)
// //      {
// //          int parent = i / 2;
// //          if (a[i] > a[parent])
// //          {
// //              Swap(a, i, parent);
// //              i = parent;
// //          }
// //          else
// //          {
// //              return;
// //          }
// //      }
// //  }
// //  PRINT FUCNTION
// //  void PrintArr(int a[], int n)
// //  {
// //      for (int i = 1; i < n; i++)
// //      {
// //          cout << a[i] << " ";
// //      }
// //      cout << "\n";
// //  }

// // HEAPIFY FUNCTION
// //  void Heapify(int arr[], int n, int i)
// //  {
// //      cout << "i " << i << endl;
// //      int Parent = i;
// //      int L = 2 * i;
// //      int R = 2 * i + 1;
// //      if (arr[R] > arr[L])
// //      {
// //          if (arr[R] > arr[Parent])
// //              Swap(arr, Parent, R);
// //          else
// //              return;
// //      }
// //      else
// //      {
// //          if (arr[Parent] < arr[L])
// //              Swap(arr, Parent, L);
// //          else
// //              return;
// //      }
// //  }

// // BUILD HEAP FUNCTION
// // void BuildHeap(int arr[], int n)
// // {
// //     for (int i = n / 2; i > 0; i--)
// //     {
// //         Heapify(arr, n, i);
// //     }
// // }

// // //KTH LARGEST ELEMENT SUM FUNCTION
// int KthLargest(int a[], int k, int n)
// {
//     priority_queue<int> pq;
//     for (int i = 0; i < k; i++)
//     {
//         pq.push(-a[i]);
//     }
//     for (int i = k; i < n; i++)
//     {
//         if ((-pq.top()) < a[i])
//         {
//             pq.pop();
//             pq.push(-a[i]);
//         }
//     }
//     return -pq.top();
// }

// // // KTH SMALLEST ELEMENT SUM FUNCTION
// // int KthSmallest(int a[], int k, int n)
// // {
// //     priority_queue<int> pq;
// //     for (int i = 0; i < k; i++)
// //         pq.push(a[i]);
// //     for (int i = k; i < n; i++)
// //     {
// //         if ((pq.top()) > a[i])
// //         {
// //             pq.pop();
// //             pq.push(a[i]);
// //         }
// //     }
// //     return pq.top();
// // }

// // CONNECT N ROPES WITH MINIMUM COST
// int minCostRopes(int a[], int n)
// {
//     priority_queue<int> pq;
//     int cost = 0;
//     int len = 0;
//     for (int i = 0; i < n; i++)
//     {
//         pq.push(-a[i]);
//     }
//     while (pq.size() > 1)
//     {
//         int fMin = -pq.top();
//         pq.pop();
//         int sMin = -pq.top();
//         pq.pop();
//         int len = fMin + sMin;
//         cost += len; // 6
//         pq.push(-len);
//     }
//     return cost;
// }
// // long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
// // {
// //     // Your code goes here

// // }
// int main()
// {
//     // HEAPIFY
//     // int arr[] = {0, 3, 5, 7, 12, 37, 59};
//     // int arr[] = {0, 10, 30, 50, 20, 35, 15};
//     // int n = sizeof(arr) / sizeof(int); // P=i/2 , L=2*i ,R=2*i+1
//     // PrintArr(arr, n);
//     // // Heapify(arr,n);
//     // BuildHeap(arr, n);
//     // PrintArr(arr, n);
//     // // INSERTION CODE
//     // int elem;
//     // cin >> elem;
//     // PrintArr(a, a.size());
//     // Insertion(a, a.size(), elem);
//     // PrintArr(a, a.size());

//     // // int a[] = {2, 5, 4, 8, 6, 9}; // 6
//     // // int n = sizeof(a) / sizeof(int);
//     int A[] = {4, 3, 2, 6};
//     int N = sizeof(A) / sizeof(int);
//     // int k = 3;
//     cout<<minCostRopes(A,N);
//     /*
//     N = 7, k = 3
// arr[] = {1,23,12,9,30,2,50}
// Output: 50 30 23
// Explanation: Three Largest element in
// the array are 50, 30 and 23.*/
//     // vector<int> v;
//     // for (int i = 1; i <= k; i++)
//     // {
//     //     int num = KthLargest(A, i, N);
//     //     v.push_back(num);
//     // }
//     // for (auto i : v)
//     // {
//     //     cout << i << " ";
//     // }
//     return 0;
// }
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main()
{
    vector<int> v;
    int n = 5, k = 2, a[] = {12, 5, 787, 1, 23};
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
        pq.push(-a[i]);
    for (int i = k; i < n; i++)
        if ((-pq.top()) < a[i])
        {
            pq.pop();
            pq.push(-a[i]);
        }
    for (int i = 0; i < k; i++)
    {
        v.push_back(-pq.top());
        pq.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}