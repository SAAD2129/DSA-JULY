// // #include<bits/stdc++.h>

// // /*
// //        *** Saad a Peaceful Soul ***
// // */
// // using namespace std;

// // class heap {

// //      public:
// //           int size;
// //           int arr[100];

// //      //insertion in heap
// //      void insert(int val) {

// //           size = size + 1;
// //           int idx = size;
// //           arr[idx] = val;
// //           while (idx > 1) {
// //                int parent = idx/2;
// //                if(arr[parent] < arr[idx]) {
// //                     swap(arr[parent], arr[idx]);
// //                     idx = parent;
// //                }
// //                else {
// //                     return;
// //                }
// //           }
// //      }

// //      //deletion
// //      void deleteinHeap(){

// //           if(size == 0)
// //                return;

// //           arr[1] = arr[size];
// //           arr[size] = -1;
// //           size--;
// //           int i = 1;
// //           while (i<size) {
// //                int right = 2 * i + 1;
// //                int left = 2 * i;
// //                if(arr[right] > arr[left]){
// //                     if(arr[right] > arr[i]){
// //                          swap(arr[right],arr[i]);
// //                          i = right;
// //                     }
// //                     else{
// //                          return;
// //                     }
// //                }
// //                else{
// //                     if(arr[left] > arr[i]){
// //                          swap(arr[left], arr[i]);
// //                          i = left;
// //                     }
// //                     else{
// //                          return;
// //                     }
// //                }
// //           }
// //      }
// //      void print(){
// //           for (int i = 1; i <= size; i++)
// //           {
// //                cout << arr[i] << " ";
// //           }
// //           cout << endl;
// //      }
// // };

// // void heapify(int arr[],int n,int i) {
// //      int largest = i;//2
// //      int right = 2*i + 1;
// //      int left = 2*i;
// //      if(arr[right] > arr[largest] && right <= n){
// //           largest = right;
// //      }
// //      if(arr[left] > arr[largest] && left <= n){
// //           largest = left;
// //      }
// //      if(largest != i){
// //           swap(arr[i],arr[largest]);
// //           heapify(arr,n,largest);//2
// //      }
// // }
// // void printheap(int arr[],int n){
// //      for (int i = 0; i < n; i++)
// //      {
// //           cout << arr[i] << " ";
// //      } cout << endl;
// // }
// // void HeapSort(int arr[],int n) {

// //      int size = n;// 8
// //      while(size > 1){

// //           swap(arr[1],arr[size]);
// //           size--;
// //           heapify(arr,size,1);
// //      }

// // }
// // int main(){

// //      heap h;
// //      h.insert(30);
// //      h.insert(35);
// //      h.insert(15);
// //      h.insert(38);
// //      h.insert(58);
// //      // h.deleteinHeap();
// //      int n;
// //      cin >> n;
// //      int * A = new int[n];
// //      A[0] = -1;
// //      for (int i = 1; i < n; i++)
// //      {
// //           cin >> A[i];
// //      }
// //      // int n  = 5;
// //      n--;
// //      for (int i = n/2; i > 0; i--)
// //      {
// //           heapify(A,n,i);
// //      }
// //      for (int i = 1; i <= n; i++)
// //      {
// //           cout << A[i] << " ";
// //      } cout << endl;
// //      HeapSort(A,n);
// //      for (int i = 1; i <= n; i++)
// //      {
// //           cout << A[i] << " ";
// //      }
// //      return 0;
// // }
// #include <bits/stdc++.h>

// /****** SAAD a Peaceful soul ******/

// using namespace std;
// int minProduct(vector<int> &arr, int n, int k)
// {
//      int mod = 1e9 + 7;
//      priority_queue<int, vector<int>, greater<int>> minHeap;
//      int product = 1;
//      for (int i = 0; i < n; ++i)
//      {
//           minHeap.push(arr[i]);
//      }

//      for (int i = 0; i < k; i++)
//      {
//           int top = minHeap.top();
//           minHeap.pop();
//           // // product = (product%mod * top%mod  % mod);
//           product = (product * top);
//           product = product%mod;
//           cout <<product <<" ";
//           // cout << top <<" " ;

//      }
//      return product;
// }
// int main()
// {

//      int t;
//      cin >> t;
//      while (t--)
//      {
//           int n, k;
//           cin >> n >> k;
//           vector<int> arr(n);
//           for (int i = 0; i < n; i++)
//           {
//                cin >> arr[i];
//           }
//           minProduct(arr, n, k);
//      }

//      return 0;
// }
#include <bits/stdc++.h>

/****** SAAD a Peaceful soul ******/

using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          int arr[n][n];
          vector<vector<int>> mat(n, vector<int>(n));
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    cin >> mat[i][j];
               }
          }
          vector<int> ans = sortedMatrix(mat, n);
          for(auto i : ans)
               cout << i << " ";
     }
     return 0;
}