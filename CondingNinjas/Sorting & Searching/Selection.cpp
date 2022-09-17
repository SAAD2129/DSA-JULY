#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

// Tc = O(n^2)
void SelectionSort(int * A ,int n){


     for (int i = 0; i < n-1; i++)
     {
          int minIdx = i; 

          for (int j = i+1; j < n; j++){
               // line 49 50 & 56 will Do the same thing like 52 & 53
               // if(A[j] < A[minIdx])
               //      minIdx = j;

               //sorting in descending order 
               // A[j] <A[i]
               if(A[j] > A[i])
                    swap(A[i],A[j]);
          }

          // swap(A[i],A[minIdx]);
          
     }
     
}

int main(){

     int n;
     cin >> n;

     int *A = new int[n];
     for(int i = 0; i < n; ++i)
          cin >> A[i];

     SelectionSort(A, n);
     for (int i = 0; i < n; i++)
     {
          cout << A[i] << " ";
     }

     return 0;
}