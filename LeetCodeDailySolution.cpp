// #include <bits/stdc++.h>

// /*
//  *** Saad a Peaceful Soul ***
//  */
// using namespace std;
// /*
// Problem Statement
// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.
// */
// bool canConstruct(string ransomNote, string magazine)
// {

//        unordered_map<char, int> rn;
//        unordered_map<char, int> m;
//        for (int i = 0; i < magazine.size(); i++)
//        {
//               m[magazine[i]]++;
//        }
//        for (int i = 0; i < ransomNote.size(); i++)
//        {
//               rn[ransomNote[i]]++;
//        }
//        for (auto i : rn)
//        {
//               if (m[i.first] < i.second)
//                      return false;
//        }
//        return true;
// }
// int main()
// {

//        string ransomNote = "a", magazine = "b";
//        cout << canConstruct(ransomNote, magazine) << endl;
//        return 0;
// }
#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

/*
You are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

Return true if and only if we can do this so that the resulting number is a power of two.
*/
bool isPowerOfTwo(int n){
     if(n == 0)
		return false;
	if(n == 1)
		return true;
	return (n % 2 == 0) &&  isPowerOfTwo(n/2);

}
void PrintArr(int A[],int idx ,int size){
	if(idx >= size)
		return;
	cout<<A[idx];
	PrintArr(A,idx+1,size);
}
int ConvertToNumber(int A[],int size){
	int num = 0;
	for (int i = size -1; i >= 0; i--)
	{
		num = num * 10 + A[i];
	}
	
	return num;
}
void CheckNumber(int arr[],int size,int idx,vector<int> &ans){ //log(n)

	if(idx >= size){
		if(arr[size-1] != 0){
			int n = ConvertToNumber(arr,size);
			ans.push_back(n);
		}
		return;
	}
	for (int i = idx; i < size; i++)
	{
		swap(arr[i],arr[idx]);
		CheckNumber(arr, size,idx+1,ans);
		swap(arr[i],arr[idx]);
	}
}

int main(){
	
	int n;
	cin >> n;
	int i=0;
	int size = log10(n)+1;
	int * arr = new int [size];

	while(n>0){ //log(n)
		int rem = n % 10;
		arr[i] = rem;
		n/=10;
		i++;
	}
	vector<int> ans;
	CheckNumber(arr, size,0,ans);

	for(auto i : ans){
		// if(isPowerOfTwo(i))
		// 	return true;
		cout << i << " "; 
	}
	// return false;
     return 0;
}