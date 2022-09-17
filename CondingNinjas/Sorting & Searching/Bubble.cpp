#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

// Tc = O(n^2)
void BubbleSort(int *A,int n){

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n-i-1; j++)
          {
               if(A[j] < A[j+1])
                    swap(A[j],A[j+1]);
          }
          
     }
     
}

int main(){

     int n;
     cin >> n;

     int *A = new int[n];
     for(int i = 0; i < n; ++i)
          cin >> A[i];

     BubbleSort(A, n);
     
     for (int i = 0; i < n; i++)
     {
          cout << A[i] << " ";
     }
     

     return 0;
}