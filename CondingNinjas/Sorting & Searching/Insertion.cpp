#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

// Tc = O(n^2)
void InsertionSort(int *A,int n){


     for (int i = 1; i < n; i++){
          int current = A[i];
          int j = i - 1;//2 4 < 9
          while(j >= 0 && current < A[j]){

              A[j+1] = A[j];
              j--;
          }
          A[j+1] = current;
     }
     

}


int main(){

     int n;
     cin >> n;

     int *A = new int[n];
     for(int i = 0; i < n; ++i)
          cin >> A[i];

     // InsertionSort(A, n);
     for (int i = 0; i < n; i++)
     {
          cout << A[i] << " ";
     }
     
     return 0;
}