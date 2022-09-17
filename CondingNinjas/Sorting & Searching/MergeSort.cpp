#include<bits/stdc++.h>

/*
      *** Saad a Peaceful Soul ***
*/
using namespace std;

void Merge(int *A,int low,int high){

	int mid = (low + high)/ 2;
	
	int len1 =  high - mid +1;
	int len2 = mid ;

	int *a1 = new int[len1];
	int *a2 = new int[len2];
	int idx = low;

	for (int i = 0; i < len1; i++)
	{
		a1[i] = A[idx++];
	}

	for (int i = 0; i < len2; i++)
	{
		a2[i] = A[idx++];
	}

	int i =0,j = 0;
	idx = 0;
	while (i<len1 && j<len2)
	{
		if(a1[i] > a2[j]){
			A[idx++] = a2[j++];
		}
		else{
			A[idx++] = a1[i++];
		}
	}
	while ( j<len2)
	{
			A[idx++] = a2[j++];
	}
	while (i<len1)
	{
			A[idx++] = a1[i++];
	}
		
}

void MergeSort(int *A,int low ,int high){

	if(low >= high)
		return;

	int mid = (low + high) / 2;

	//left part
	MergeSort(A,low,mid);


	//right part
	MergeSort(A,mid+1,high);

	Merge(A,low,high);
}

int main(){

	int n;
	cin >> n;

	int *A = new int[n];
	for(int i = 0; i < n; ++i)
		cin >> A[i];

	MergeSort(A, 0,n-1);

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}


     return 0;
}