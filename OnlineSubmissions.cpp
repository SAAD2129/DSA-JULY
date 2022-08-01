// // // // // // // // // // // #include <iostream>
// // // // // // // // // // // #include <string>
// // // // // // // // // // // #include <cmath>
// // // // // // // // // // // #include <time.h>
// // // // // // // // // // // #include <iomanip>
// // // // // // // // // // // #include <climits>
// // // // // // // // // // // #include <algorithm>

// // // // // // // // // // // using namespace std;

// // // // // // // // // // // int main()
// // // // // // // // // // // {

// // // // // // // // // // //     int arr[] = {-5, 3, 5, 4, -1}; // 6
// // // // // // // // // // //     int n = 5;
// // // // // // // // // // //     int sum = 0;
// // // // // // // // // // //     int maxSum = 0;
// // // // // // // // // // //     // BRUTE FORCE APPROACH
// // // // // // // // // // //     // for (int i = 0; i < n; i++)
// // // // // // // // // // //     // {
// // // // // // // // // // //     //     for (int j = i; j < n; j++)
// // // // // // // // // // //     //     {
// // // // // // // // // // //     //         sum+=arr[j];
// // // // // // // // // // //     //     }
// // // // // // // // // // //     //     curSum = max(sum, curSum);
// // // // // // // // // // //     //     sum=0;
// // // // // // // // // // //     // }
// // // // // // // // // // //     // cout<<curSum;
// // // // // // // // // // //     // KADANE'S ALGORITHAM APPROACH
// // // // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // // // //     {
// // // // // // // // // // //         sum += arr[i];
// // // // // // // // // // //         if (sum > maxSum)
// // // // // // // // // // //             maxSum = sum;
// // // // // // // // // // //         if (sum < 0)
// // // // // // // // // // //             sum = 0;
// // // // // // // // // // //     }
// // // // // // // // // // //     cout << sum;

// // // // // // // // // // //     return 0;
// // // // // // // // // // // }
// // // // // // // // // // // // #include <iostream>
// // // // // // // // // // // // #include <string>
// // // // // // // // // // // // #include <cmath>
// // // // // // // // // // // // #include <time.h>
// // // // // // // // // // // // #include <iomanip>
// // // // // // // // // // // // #include <climits>
// // // // // // // // // // // // #include <algorithm>

// // // // // // // // // // // // using namespace std;

// // // // // // // // // // // // int main()
// // // // // // // // // // // // {

// // // // // // // // // // // //     int arr[] = {1, 2, 3, 4, 5}; // 6
// // // // // // // // // // // //     int n = 5;
// // // // // // // // // // // //     int sum = 0;
// // // // // // // // // // // //     int maxSum = 0, minSum=0;
// // // // // // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         sum += arr[i];
// // // // // // // // // // // //     }
// // // // // // // // // // // //     maxSum=minSum=sum;
// // // // // // // // // // // //     maxSum-=arr[0];
// // // // // // // // // // // //     minSum -= arr[n-1];
// // // // // // // // // // // //     cout << maxSum << " ";
// // // // // // // // // // // //     cout << minSum;

// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // #include <bits/stdc++.h>

// // // // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // // // using namespace std;

// // // // // // // // int main()
// // // // // // // // {

// // // // // // // //     int a1[] = {1,5,8,7,3}; // 24
// // // // // // // //     int a2[] = {3,1 ,4,5,8}; // 21
// // // // // // // //     int fs = 0, ss = 0;
// // // // // // // //     int n = sizeof(a1) / sizeof(int);
// // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // //     {
// // // // // // // //         fs += a1[i];
// // // // // // // //         ss += a2[i];
// // // // // // // //     }
// // // // // // // //     if (fs == ss)
// // // // // // // //     {
// // // // // // // //         cout << true;
// // // // // // // //         cout << " fs " << fs << "\nss " << ss;
// // // // // // // //         exit(0);
// // // // // // // //     }
// // // // // // // //     for (int i = 0; i < n; i++)
// // // // // // // //     {
// // // // // // // //         for (int j = 0; j < n; j++)
// // // // // // // //         {
// // // // // // // //             fs = fs - a1[i] + a2[j];
// // // // // // // //             ss = ss + a1[i] - a2[j];
// // // // // // // //             if (fs == ss)
// // // // // // // //             {
// // // // // // // //                 cout << true;
// // // // // // // //                 cout << " fs " << fs << "\nss " << ss;
// // // // // // // //                 int temp=a1[i];
// // // // // // // //                 a1[i]=a2[j];
// // // // // // // //                 a2[j]=temp;
// // // // // // // //                 break;
// // // // // // // //             }
// // // // // // // //             else{
// // // // // // // //                 fs = fs + a1[i] - a2[j];
// // // // // // // //                 ss = ss - a1[i] + a2[j];
// // // // // // // //             }
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // #include <bits/stdc++.h>

// // // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // // using namespace std;

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int a[] = {4, 1, 3, 9, 7};

// // // // // // //     int n = sizeof(a) / sizeof(int);
// // // // // // //     int counter = 0;
// // // // // // //     while (counter < n) // 4
// // // // // // //     {
// // // // // // //         for (int i = 0; i < n - counter; i++) // 4
// // // // // // //         {
// // // // // // //             if (a[i] > a[i + 1])
// // // // // // //             {
// // // // // // //                 int temp = a[i];
// // // // // // //                 a[i] = a[i + 1];
// // // // // // //                 a[i + 1] = temp;
// // // // // // //             }
// // // // // // //         }
// // // // // // //         counter++;
// // // // // // //     }
// // // // // // //     for (int i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         cout << a[i] << " ";
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // //  long long maxSubarraySum(int arr[], int n){

// // // // // // // // Your code here
// // // // // // // // long long max_so_far = INT_MIN, max_ending_here = 0;

// // // // // // // // for (int i = 0; i < n; i++)
// // // // // // // // {
// // // // // // // //     max_ending_here  += arr[i];
// // // // // // // //     if (max_so_far < max_ending_here)
// // // // // // // //         max_so_far = max_ending_here;

// // // // // // // //     if (max_ending_here < 0)
// // // // // // // //         max_ending_here = 0;
// // // // // // // // }
// // // // // // // // return max_so_far;
// // // // // // // // }

// // // // // // // // SUB ARRAY WITH GIVEN SUM
// // // // // // // v long long sum, i, j;
// // // // // // // vector<int> v;

// // // // // // // // Pick a starting point
// // // // // // // for (i = 0; i < n; i++)
// // // // // // // {
// // // // // // //     sum = arr[i];

// // // // // // //     // try all subarrays starting with 'i'
// // // // // // //     for (j = i + 1; j <= n; j++)
// // // // // // //     {
// // // // // // //         if (sum == s)
// // // // // // //         {
// // // // // // //             // cout << "Sum found between indexes "
// // // // // // //             v.push_back(i + 1);
// // // // // // //             v.push_back(j);
// // // // // // //             return v;
// // // // // // //         }
// // // // // // //         if (sum > s || j == n)
// // // // // // //             break;
// // // // // // //         sum = sum + arr[j];
// // // // // // //     }
// // // // // // // }
// // // // // // // v.push_back(-1);

// // // // // // // return v;
// // // // // // // //  MIN SUM IN ARRAY WITH DIGITS
// // // // // // // long long int minSum(int arr[], int n)
// // // // // // // {
// // // // // // //     // Your code goes here
// // // // // // //     sort(arr, arr + n);
// // // // // // //     int a = 0, b = 0;
// // // // // // //     for (int i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         if (i % 2 == 0)
// // // // // // //             a = (a * 10) + arr[i];
// // // // // // //         else
// // // // // // //             b = (b * 10) + arr[i];
// // // // // // //     }
// // // // // // //     return a + b;
// // // // // // // }

// // // // // // // ARRAY REVERSING CODE
// // // // // // #include <bits/stdc++.h>

// // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // using namespace std;
// // // // // // int ReversArr(int arr[], int n)
// // // // // // {
// // // // // //     // for (int i = 0; i < n / k + 1; i++)
// // // // // //     // {
// // // // // //     //     if ((i + 1) * k < n)
// // // // // //     //         reverse(arr.begin() + i * k, arr.begin() + (i + 1) * k);
// // // // // //     //     else
// // // // // //     //         reverse(arr.begin() + i * k, arr.end());
// // // // // //     // }
// // // // // //     for (int i = 0; i < n / 2; i++)
// // // // // //     {
// // // // // //         int temp = arr[i];
// // // // // //         arr[i] = arr[n - i - 1];
// // // // // //         arr[n - i - 1] = temp;
// // // // // //     }
// // // // // // }
// // // // // // int main()
// // // // // // {

// // // // // //     int arr[] = {3, 5, 7, 8, 12, 37, 59};
// // // // // //     int n = sizeof(arr) / sizeof(int);
// // // // // //     ReversArr(arr, n);
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         cout << arr[i] << " ";
// // // // // //     }

// // // // // //     return 0;
// // // // // // }
// // // // // // // // KTH SMALLEST ELEMENT IN ARRAY
// // // // // // #include <bits/stdc++.h>

// // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // using namespace std;
// // // // // // int kthSmallestElement(int a[], int n, int k)
// // // // // // {
// // // // // //     int MinK = INT_MAX;
// // // // // //     for (int i = 0; i < k; i++)
// // // // // //     {
// // // // // //         for (int j = 0; j < n; j++)
// // // // // //         {
// // // // // //             MinK = min(a[i], MinK);
// // // // // //         }
// // // // // //         if (k == i + 1)
// // // // // //             break;
// // // // // //         MinK = INT_MAX;
// // // // // //     }
// // // // // //     return MinK;
// // // // // // }
// // // // // // int main()
// // // // // // {

// // // // // //     int arr[] = {3, 5, 7, 8, 12, 37, 59};
// // // // // //     int n = sizeof(arr) / sizeof(int);
// // // // // //     int k;
// // // // // //     cin >> k;
// // // // // //     // Without This
// // // // // //     sort(arr,arr+n);
// // // // // //     cout<<arr[k-1];
// // // // // //     // cout << kthSmallestElement(arr, n, k);
// // // // // //     return 0;
// // // // // // }
// // // // // // // MISSING NUMBER IN THE ARRAY ITERATIVE APPROCH O(N)
// // //  #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // int MissingNumber(vector<int> &a, int n)
// // // {
// // //     // Your code goes here
// // //     int total;//
// // //     total = (n) * (n + 1) / 2;// 36
// // //     for (int i = 0; i < n - 1; i++)
// // //         total -= a[i];
// // //     return total;
// // // }
// // // int main()
// // // {
// // //     vector<int> v;
// // //     v = {1, 3, 5, 2, 6, 8, 4};//29
// // //     int n = v.size()+1;
// // //     cout<<n;
// // //     cout << MissingNumber(v, n);

// // //     return 0;
// // // }

// // // // // // //ZIGZAG FASHION ARRAY
// // // // // // #include <bits/stdc++.h>

// // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // using namespace std;
// // // // // // int Swap(int a[], int pos, int N)
// // // // // // {
// // // // // //     if (pos < N - 1)
// // // // // //     {
// // // // // //         int Temp = a[pos];
// // // // // //         a[pos] = a[pos + 1];
// // // // // //         a[pos + 1] = Temp;
// // // // // //         return 0;
// // // // // //     }
// // // // // //     return 0;
// // // // // // }
// // // // // // int main()
// // // // // // {

// // // // // //     // Input:
// // // // // //     int Arr[] = {3, 5, 7, 8, 12, 37, 59};
// // // // // //     int N = 7;

// // // // // //     // int Arr[] = {4, 3, 7, 8, 6, 2, 1};

// // // // // //     //{3,7,4, 8, 6, 2, 1};
// // // // // //     //
// // // // // //     for (int i = 0; i < N; i++)
// // // // // //     {
// // // // // //         if (Arr[i] > Arr[i + 1])
// // // // // //             Swap(Arr, i,N );
// // // // // //         i++;
// // // // // //         if (Arr[i] < Arr[i + 1])
// // // // // //             Swap(Arr, i, N);
// // // // // //     }
// // // // // //     for (int i = 0; i < N; i++)
// // // // // //         cout << Arr[i] << " ";

// // // // // //     // Output: 3 7 4 8 2 6 1
// // // // // //     // Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
// // // // // //     // aar[i] =temp  arr[i]max
// // // // // //     return 0;
// // // // // // }

// // // // // // //FIRST ELEMENT OCCUR K TIMES IN O(N)
// // // // // // #include <bits/stdc++.h>

// // // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     int arr[] = {3, 4, 5, 5, 3, 5, 3};
// // // // // //     int n = sizeof(arr) / sizeof(int);
// // // // // //     int Max = INT_MIN;
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         Max = max(arr[i], Max);
// // // // // //     }
// // // // // //     vector<int> Arr(Max + 1, 0);
// // // // // //     for (int i = 0; i < n; i++)
// // // // // //     {
// // // // // //         Arr[arr[i]]++;
// // // // // //         if (Arr[arr[i]] >= count)
// // // // // //         {
// // // // // //             cout << arr[i];
// // // // // //             break;
// // // // // //         }
// // // // // //     }

// // // // // //     return 0;
// // // // // // }
// // // // // // REVERSING THE ARRAY
// // // // // #include <bits/stdc++.h>

// // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // using namespace std;

// // // // // int main()
// // // // // {

// // // // //     //     Input:
// // // // //     int N = 8, K = 5, arr[] = {1, 2, 3, 4, 5, 11, 15, 17};

// // // // //     for (int i = 0; i < N / K + 1; i++) // 3/2 == 1
// // // // //     {
// // // // //         int t = arr[i];
// // // // //         arr[i] = arr[K - i - 1];
// // // // //         arr[K - i - 1] = t;
// // // // //     }
// // // // //     // for (int i = 0; i < K / 2; i++) // 3/2 == 1
// // // // //     // {
// // // // //     //     int t = arr[i];
// // // // //     //     arr[i] = arr[K - i - 1];
// // // // //     //     arr[K - i - 1] = t;
// // // // //     // }
// // // // //     // for (int i = K; i < N; i++) // 3/2 == 5/2 = 2
// // // // //     // {
// // // // //     //     int t = arr[i]; //3
// // // // //     //     arr[i] = arr[N - 2];
// // // // //     //     arr[N - 2] = t;
// // // // //     // }
// // // // //     // for (int i = 0; i < N; i++)
// // // // //     // {
// // // // //     //     cout<<arr[i]<<" ";
// // // // //     // }

// // // // //     // Explanation: First group consists of elements
// // // // //     // 1, 2, 3. Second group consists of 4,5.
// // // // //     // Output: 3 2 1 5 4

// // // // //     return 0;
// // // // // }

// // // // // MERGING THE ARRAY
// // // // // #include<bits/stdc++.h>

// // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // using namespace std;

// // // // // int main(){

// // // // //     int a[]={1,2,5,7,0,0,0};
// // // // //     int na=sizeof(a)/sizeof(int);
// // // // //     int b[]={2,5,1};
// // // // //     int nb=sizeof(b)/sizeof(int);
// // // // //     int i,j;
// // // // //     i=j=0;
// // // // //     // cout<<i<<" "<<na;
// // // // //     // cout<<a[3];
// // // // //     while (i<=na)
// // // // //     {
// // // // //         if (a[i]==0)
// // // // //         {
// // // // //             a[i]=b[j];
// // // // //             j++;
// // // // //         }
// // // // //         i++;
// // // // //     }
// // // // //     sort(a,a+na);
// // // // //     for (int i = 0; i < na; i++)
// // // // //     {
// // // // //         cout<<a[i]<<" ";
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // // STL
// // // // // #include <bits/stdc++.h>

// // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // using namespace std;

// // // // // int main()
// // // // // {

// // // // //     int n = 52, m = 26;
// // // // //     int a[] = {1,2,3,4,5,6,61,36,34,44,3,63,43,42,67,5,8546,42,33231,32,53,633,36,324,632,34,26,7,547323,253,64,64,4321,536,754,3,3478,636,8,354,867574,3457,3522,8535,5754,784,48,86,49,398,498,683};
// // // // //     int b[] = {1, 36, 547323, 253, 64, 64, 4321, 536, 754, 3, 3478, 636, 8, 354, 867574, 3457, 3522, 8535, 5754, 784, 48, 86, 49, 398, 498, 683};
// // // // //     int count = 0;
// // // // //     int i(0), j(0);
// // // // //     while (i < n)
// // // // //     {
// // // // //         if (a[i] == b[j])
// // // // //         {
// // // // //             count++;
// // // // //             j++;
// // // // //         }
// // // // //         i++;
// // // // //     }
// // // // //     cout << count;
// // // // //     return 0;
// // // // // }
// // // // // #include<bits/stdc++.h>

// // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // using namespace std;

// // // // // int main(){

// // // // //     string x = "{([])}";
// // // // //     stack<char> st;
// // // // //     bool ans = true;
// // // // //     for (int i = 0; i < x.length(); i++)
// // // // //     {
// // // // //         if (x.at(i) == '{' || x.at(i) == '[' || x.at(i) == '(')
// // // // //             st.push(x[i]);
// // // // //         else if (x[i] == ']')
// // // // //         {
// // // // //             if (!st.empty() && st.top() == '[')
// // // // //             {
// // // // //                 st.pop();
// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 ans = false;
// // // // //                 break;
// // // // //             }
// // // // //         }
// // // // //         else if (x[i] == '}')
// // // // //         {
// // // // //             if (!st.empty() && st.top() == '{')
// // // // //             {
// // // // //                 st.pop();
// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 ans = false;
// // // // //                 break;
// // // // //             }
// // // // //         }
// // // // //         else if (x[i] == ')')
// // // // //         {
// // // // //             if (!st.empty() && st.top() == '(')
// // // // //             {
// // // // //                 st.pop();
// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 ans = false;
// // // // //                 break;
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //     if (!ans)
// // // // //         cout << "Un Balanced " << endl;
// // // // //     if (ans)
// // // // //         cout << "Balanced " << endl;

// // // // //     return 0;
// // // // // }
// // // // // void Delete(vector<int> &v,int n){
// // // // //     // n=n-1;
// // // // // }
// // // // // #include <bits/stdc++.h>

// // // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int n = 5, m = 3;
// // // // //     int a[] = {1, 2, 3, 4, 5};
// // // // //     int b[] = {1, 2, 3};
// // // // //     set<int> st;
// // // // //     sort(a, a + n);
// // // // //     sort(b, b + m);
// // // // //     for (int i : a)
// // // // //         st.insert(i);
// // // // //     for (int i : b)
// // // // //         st.insert(i);
// // // // //     int N=st.size();
// // // // //     cout<<N;
// // // // //     return 0;
// // // // // }
// // // // #include<bits/stdc++.h>

// // // // /****** SAAD A PEACEFUL SOUL ******/

// // // // using namespace std;

// // // // int main(){

// // // //     // Input:
// // // //     // LinkedList: 9->0->5->1->6->1->2->0->5->0
// // // //     // int
// // // //     // Output: 5 2 9 5 6

// // // //     return 0;
// // // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // class Node
// // // {
// // // public:
// // //     int data;
// // //     Node *next;
// // //     Node() {}
// // //     Node(int val)
// // //     {
// // //         data = val;
// // //         next = NULL;
// // //     }
// // // };
// // // Node *ReverseLink(Node *&head)
// // // {
// // //     Node *cur = head;
// // //     Node *prev = NULL;
// // //     while (cur != NULL)
// // //     {
// // //         Node *temp = cur->next;
// // //         cur->next = prev;
// // //         prev = cur;
// // //         cur = temp;
// // //     }

// // //     return prev;
// // // }
// // // int Elem(Node *head)
// // // {
// // //     Node *Fast = head;
// // //     Node *Slow = head;
// // //     while (Fast->next != NULL && Fast != NULL)
// // //     {
// // //         Slow = Slow->next;
// // //         Fast = Fast->next->next;
// // //     }
// // //     cout << Slow->data;
// // // }
// // // int counter(Node *head)
// // // {
// // //     int c = 0;
// // //     while (head != NULL)
// // //     {
// // //         c++;
// // //         head = head->next;
// // //     }
// // //     return c;
// // // }

// // // Node *RemoveCycle(Node *&head, int x)
// // // {
// // //     Node *temp = head;

// // //     for (int i = 1; i < x; i++)
// // //     {
// // //         temp = temp->next;
// // //     }
// // //     cout<<temp->data;
// // //     Node *cur = temp;
// // //     Node *newH = cur;
// // //     temp = temp->next;//1 2 3 4
// // //     do
// // //     {
// // //         Node *toDelete = temp;
// // //         temp = temp->next;
// // //         delete toDelete;
// // //     } while (cur != temp);
// // //     return newH;
// // // }
// // // Node * Sorting(Node * &head)
// // // {

// // // }
// // // int main()
// // // {

// // //     Node *head = new Node;
// // //     Node *n1 = new Node(1);
// // //     Node *n2 = new Node(2);
// // //     Node *n3 = new Node(3);
// // //     Node *n4 = new Node(4);
// // //     Node *n4 = new Node(4);
// // //     Node *n5 = new Node(5);
// // //     Node *n6 = new Node(6);
// // //     Node *n7 = new Node(7);
// // //     // CREATING CHAIN OR IN EASY WORDS LINKED LIST
// // //     head = n1;
// // //     n1->next = n2;
// // //     n2->next = n3;
// // //     n3->next = n4;
// // //     n4->next = n2;
// // //     n4->next = n5;
// // //     n5->next = n6;
// // //     n6->next = n7;
// // //     n7->next = NULL;
// // //     // Elem(head);
// // //     // int x = 1;
// // //     // Node *n = RemoveCycle(head, x);
// // //     // cout << n->data << " ";
// // //     // cout << n->next->data << " ";
// // //     // cout << n->next->next->data << " ";
// // //     // cout << n->next->next->next->data << " ";
// // //     /*
// // //     N = 3
// // //     value[] = {1,3,4}
// // //     X = 2
// // //     Output: 1
// // //     */
// // //     // Node *nNode = ReverseLink(head);
// // //     // int n = 4;
// // //     // int c = counter(nNode);
// // //     // if (c < n)
// // //     // {
// // //     //     cout << -1;
// // //     //     return 0;
// // //     // }

// // //     // for (int i = 1; i < n; i++)
// // //     // {
// // //     //     nNode = nNode->next;
// // //     // }
// // //     // cout << nNode->data;
// // //     return 0;
// // // }
// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // class Node
// // // {
// // // public:
// // //     int data;
// // //     Node *next;
// // //     Node() {}
// // //     Node(int val)
// // //     {
// // //         data = val;
// // //         next = NULL;
// // //     }
// // // };
// // // Node *Sorting(Node *head1, Node *head2)
// // // {
// // //     Node *h3;
// // //     Node*temp=new Node(-1);
// // //     temp=h3;
// // //     while (head1 != NULL && head2 != NULL)
// // //     {
// // //         if ((head1->data) < (head2->data))
// // //         {
// // //             h3->next = head1;
// // //             head1 = head1->next;
// // //         }
// // //         if ((head1->data )>( head2->data))
// // //         {
// // //             h3->next = head2;
// // //             head2 = head2->next;
// // //         }
// // //         h3 = h3->next;
// // //     }
// // //     while (head1 != NULL)
// // //     {
// // //         h3->next = head1;
// // //         head1 = head1->next;
// // //         h3 = h3->next;
// // //     }

// // //     while (head2 != NULL)
// // //     {
// // //         h3->next = head2;
// // //         head2 = head2->next;
// // //         h3 = h3->next;
// // //     }
// // //     return temp->next;
// // // }
// // // int main()
// // // {
// // //     // FOUR NODES CREATED;
// // //     Node *head1 = new Node;
// // //     Node *n1 = new Node(0);
// // //     Node *n2 = new Node(1);
// // //     Node *n3 = new Node(1);
// // //     head1=n1;
// // //     n1->next=n2;
// // //     n2->next=n3;
// // //     n3->next=NULL;
// // //     Node *head2 = new Node;
// // //     Node *n5 = new Node(1);
// // //     Node *n6 = new Node(2);
// // //     Node *n7 = new Node(2);
// // //     Node *n8 = new Node(2);
// // //     Node *n9 = new Node(1);
// // //     Node *n10 = new Node(0);
// // //     head2=n5;
// // //     n5->next=n6;
// // //     n6->next=n7;
// // //     n7->next=n8;
// // //     n8->next=n9;
// // //     n9->next=n10;
// // //     n10->next=NULL;
// // //     Node *Sorted = Sorting(head1, head2);
// // //     while (Sorted != NULL)
// // //     {
// // //         cout << Sorted->data<<" ";
// // //         Sorted = Sorted->next;
// // //     }

// // //     return 0;
// // // }
// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // void Reversed(string s)
// // // {
// // //     stack<string> st;
// // //     for (int i = 0; i < s.length(); i++)
// // //     {
// // //         string word = "";
// // //         while (s[i] != '.' && i < s.length())
// // //         {

// // //             word += s[i];
// // //             i++;
// // //         }
// // //         for (int j = 0; j < word.length() / 2; j++)
// // //         {
// // //             char c = word[j];
// // //             word[j] = word[word.length() - j - 1];
// // //             word[word.length() - j - 1] = c;
// // //         }
// // //         // cout<<word;
// // //         st.push(word);
// // //     }
// // //     while (!st.empty())
// // //     {
// // //         cout << st.top();
// // //         st.pop();
// // //     }
// // // }
// // // int main()
// // // {

// // //     string s = "i.like.this.program.very.much";
// // //     Reversed(s);
// // //     /*
// // //     S = "i.like.this.program.very.much"
// // //     Output:
// // //     i.ekil.siht.margorp.yrev.hcum
// // //     */
// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // // MAX ONES IN A ROW INDEX OF THAT ROW
// // // int maxOnes()
// // // {
// // //     // your code here
// // //     int N = 3;
// // //     int M = 4;
// // //     int Mat[3][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {0, 1, 0, 0}};
// // //     int idx = -1;
// // //     int MaxCount = INT_MIN;
// // //     int count = 0;
// // //     for (int i = 0; i < N; i++)
// // //     {
// // //         for (int j = 0; j < M; j++)
// // //         {
// // //             if (Mat[i][j] == 1)
// // //                 count++;
// // //         }
// // //         if (count > MaxCount)
// // //         {
// // //             MaxCount = count;
// // //             idx = i;
// // //         }
// // //         count = 0;
// // //     }
// // //     return idx;
// // // }
// // // int main()
// // // {
// // //     cout << maxOnes();
// // //     return 0;
// // // }
// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // bool X()
// // // {
// // //     int n = 3, m = 3, x = 62;
// // //     int matrix[][3] = {{3, 30, 38},
// // //                        {36, 43, 60},
// // //                        {40, 51, 69}};
// // //     int row = 0, col = m-1;
// // //     while (row <n && col>=0)
// // //     {

// // //         if (matrix[row][col]==x)
// // //         {
// // //             return true;
// // //         }
// // //         if (matrix[row][col] > x)
// // //         {
// // //             col--;
// // //         }
// // //         else
// // //         {
// // //             row++;
// // //         }
// // //     }
// // //     return false;
// // // }
// // // int main()
// // // {

// // //     cout << X();

// // //     return 0;
// // // }
// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;

// // // int main()
// // // {

// // //     int a[] = {3, 3, 2, 3, 4, 5, 1, 2};
// // //     int n = sizeof(a) / sizeof(int);
// // //     vector<int> v(n, 0);
// // //     int idx[n];
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         idx[i] = 0;
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         idx[a[i]]++;
// // //         if (idx[a[i]] > 1)
// // //         {
// // //             v.push_back(i);
// // //         }
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {

// // //             cout<<v.end()<<" ";
// // //             v.pop_back();
// // //             // v.erase(i);
// // //     }
// // //     // unordered_set<int>::iterator it;
// // //     // for (it = s.begin(); it != s.end(); it++)
// // //     // {
// // //     //     cout << *it << " ";
// // //     // }

// // //     return 0;
// // // }
// // // #include<bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // // void rotateArr(int arr[], int d, int n)
// // // void rotateArr()
// // // {
// // //     // code here
// // //     int arr[]={1,2,3,4,5};
// // //     int d=2,n=5;
// // //     while (d)
// // //     {
// // //         int t = arr[0];
// // //         for (int i = 0; i < n; i++)
// // //         {

// // //             arr[i] = arr[i + 1];
// // //         }
// // //         arr[n - 1] = t;
// // //         // {2,3,4,5,5}
// // //         d--;
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout<<arr[i]<<" ";
// // //     }

// // // }
// // // int main(){

// // //     rotateArr();

// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // FIND ALL PAIRS WITH A GIVEN SUM
// // // using namespace std;
// // // int main()
// // // { int n = 65;
// // //     int m =37;
// // //     int X=2;
// // //     // int A[] = {1, 2, 4, 5, 7}, B[] = {5, 6, 3, 4, 8}, X = 9;
// // //     int A[n];
// // //     int B[m];
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin>>A[i];
// // //     }
// // //     for (int i = 0; i < m; i++)
// // //     {
// // //         cin>>B[i];
// // //     }

// // //     //int A[] = {-1, -2, 4, -6, 5, 7},B[] = {6, 3, 4, 0}, X=8;

// // //     // Output:
// // //     // 1 8
// // //     // 4 5
// // //     // 5 4
// // //     unordered_set<int> mp;
// // //     vector<pair<int, int>> vp;
// // //     int a = 0;
// // //     for (int i = 0; i < m; i++)
// // //     {
// // //         mp.insert(B[i]);
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         if (mp.count(X - A[i]))
// // //             vp.push_back(make_pair(A[i], X - A[i]));
// // //     }
// // //     sort(vp.begin(),vp.end());
// // //     for (auto i : vp)
// // //     {
// // //         cout << i.first << " " << i.second << endl;
// // //     }

// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // MAKE SWAPING SUM EQUAL TO ANOTHER ARRAY
// // // int main()
// // // {
// // //     int N = 4, M = 4;
// // //     int A[] = {4, 5, 6, 7};
// // //     int B[] = {1, 2, 3, 8};
// // //     return 0;
// // // }

// // // #include<bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;
// // // void printHeap(priority_queue<int> pq, int n)
// // // {
// // //     for (int i = 1; i < n; i++)
// // //     {
// // //         cout<<-pq.top()<<" ";
// // //         pq.pop();
// // //     }
// // // }

// // // int MinOperations(int a[], int n,int k){
// // //     int i=1;
// // //     while (a[i]<k)
// // //     {
// // //         int rc=2*i+1;
// // //         int lc=2*i;
// // //     }

// // // }

// // // void minHeapify(int a[],int n){
// // //     int i=n;
// // //     while (i>1)
// // //     {
// // //         int lc=i*2;
// // //         int rc=i*2+1;
// // //     }

// // // }
// // // int main(){

// // // int a[]={1,10,12,9,3,2};
// // // int a[]={5,4,6,4};
// // // int n=sizeof(a)/sizeof(int);
// // // int k=4;
// // // for (int i = 0; i < n; i++)
// // // {
// // //     cout<<a[i]<<" ";
// // // }
// // // cout<<"\n";
// // // int ct = 0;
// // // sort(a, a + n);
// // // for (int i = 0; i < n; i++)
// // // {
// // //     if (a[0]<k)
// // //     {
// // //         a[0] += a[1];
// // //         for (int j = 1; j < n; j++)
// // //         {
// // //             a[j] = a[j + 1];
// // //         }
// // //         n--;
// // //         cout<<"\n";
// // //         for (int f = 0; f < n; f++)
// // //         {
// // //           cout<<a[f]<<" ";
// // //         }
// // //         cout<<"\n";
// // //         ct++;
// // //     }
// // //     else{
// // //         break;
// // //     }
// // // }
// // // cout<<ct;
// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;

// // // int main()
// // // {

// // //     int k = 5;
// // //     int num = 1;
// // //     while (num < k)
// // //         num *= 2;

// // //     cout << (num/2);
// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;

// // // const int N = 1e6 + 7;
// // // int Hash[N];

// // // int main()
// // // {
// // //     int n;
// // //     int q;
// // //     cin >> q;
// // //     cin >> n;
// // //     int A[n];
// // //     for (int i = 1; i <= n; i++)
// // //     {
// // //         cin >> A[i];
// // //     }
// // //     for (int i = 1; i < N; i++)
// // //     {
// // //         Hash[i] += Hash[i + 1];
// // //     }
// // //     while (q--)
// // //     {
// // //         int sum = 0;
// // //         int l, r;
// // //         cin >> l >> r;
// // //         for (int i = l; i <= r; i++)
// // //         {
// // //             sum += A[i];
// // //         }
// // //         cout << sum << endl;
// // //     }

// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>

// // // /****** SAAD A PEACEFUL SOUL ******/

// // // using namespace std;

// // // ADD ARRAY ELEMENTS USING HEAPS
// // // int minOps(int A[], int n, int k)
// // // {
// // //     priority_queue<int> pq;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         pq.push(-A[i]);
// // //     }
// // //     int ct=0;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         int fMin = -pq.top();
// // //         pq.pop();
// // //         int sMin = -pq.top();
// // //         pq.pop();
// // //         if (fMin >= k)
// // //             return ct;
// // //         ct++;
// // //         pq.push(-(fMin+sMin));
// // //     }
// // //     return ct;
// // // }
// // // int main()
// // // {

// // //     // int A[] = {1, 10, 12, 9, 2, 3};
// // //     int A[] = {5,4,6,4};
// // //     int n = sizeof(A) / sizeof(int);
// // //     int k = 4;
// // //     cout << minOps(A, n, k);

// // //     return 0;
// // // }

// // // DECIMAL BINARY EQUIVALENT OF LINKED LIST
// // // #include <bits/stdc++.h>
// // // /****** SAAD A PEACEFUL SOUL ******/
// // // const int MOD=1e9+7;
// // // using namespace std;
// // // class Node
// // // {
// // // public:
// // //     int data;
// // //     Node *next;
// // //     Node() {}
// // //     Node(int d)
// // //     {
// // //         data = d;
// // //         next = NULL;
// // //     }
// // // };
// // // void print(Node *head)
// // // {
// // //     Node *t = head;
// // //     while (t != NULL)
// // //     {
// // //         cout << t->data << " ";
// // //         t = t->next;
// // //     }
// // // }
// // // long long  linkBinEqui(Node *&head)
// // // {
// // //     Node *temp = head;
// // //     long long unsigned int binary = 0;
// // //     while (temp != NULL)
// // //     {
// // //         binary = ((temp->data)%MOD +(binary*2)%MOD)%MOD;
// // //         temp = temp->next;
// // //     }
// // //     return binary;
// // // }
// // // int main()
// // // {
// // //     Node *head = new Node;
// // //     Node *n1 = new Node(0);
// // //     Node *n2 = new Node(1);
// // //     Node *n3 = new Node(1);
// // //     head = n1;
// // //     n1->next = n2;
// // //     n2->next = n3;
// // //     cout<<linkBinEqui(head)<<endl;
// // //     return 0;
// // // }

// // // LINKED LIST UNION
// // //  #include <bits/stdc++.h>
// // //  /****** SAAD A PEACEFUL SOUL ******/
// // //  using namespace std;
// // //  class Node
// // //  {
// // //  public:
// // //      int data;
// // //      Node *next;
// // //      Node() {}
// // //      Node(int d)
// // //      {
// // //          data = d;
// // //          next = NULL;
// // //      }
// // //  };
// // //  void func(set<int> &s, Node *&h1, Node *&h2)
// // //  {
// // //      Node *t1 = h1;
// // //      Node *t2 = h2;
// // //      while (t1 != NULL)
// // //      {
// // //          s.insert(t1->data);
// // //          t1 = t1->next;
// // //      }
// // //      while (t2 != NULL)
// // //      {
// // //          s.insert(t2->data);
// // //          t2 = t2->next;
// // //      }
// // //  }
// // //  int main()
// // //  {
// // //      Node *head1 = new Node;
// // //      Node *n1 = new Node(9);
// // //      Node *n2 = new Node(6);
// // //      Node *n3 = new Node(4);
// // //      Node *n4 = new Node(2);
// // //      Node *n5 = new Node(3);
// // //      Node *n6 = new Node(8);
// // //      head1 = n1;
// // //      n1->next = n2;
// // //      n2->next = n3;
// // //      n3->next = n4;
// // //      n4->next = n5;
// // //      n5->next = n6;
// // //      Node *head2 = new Node;
// // //      Node *a1 = new Node(1);
// // //      Node *a2 = new Node(2);
// // //      Node *a3 = new Node(8);
// // //      Node *a4 = new Node(6);
// // //      Node *a5 = new Node(2);
// // //      head2 = a1;
// // //      a1->next = a2;
// // //      a2->next = a3;
// // //      a3->next = a4;
// // //      a4->next = a5;
// // //      set<int> s;
// // //      func(s, head1, head2);
// // //      Node * t=new Node;
// // //      for (auto i : s)
// // //      {
// // //          cout << i << " ";
// // //      }
// // //      return 0;
// // //  }
// // #include <bits/stdc++.h>

// // /****** SAAD A PEACEFUL SOUL ******/

// // using namespace std;
// // const int MOD = 1e9 + 7;
// // int nthGpTerm(int n, int r, int a)
// // {
// //     if (n == 1)
// //         return a;
// //     return ((nthGpTerm(n - 1, r, a) % MOD) * (r % MOD)) % MOD;
// // }
// // int main()
// // {

// //     int n, a, r;
// //     cin >> n >> r >> a;
// //     cout << nthGpTerm(n, r, a) << endl;
// //     return 0;
// // }
// // #include<bits/stdc++.h>

// // /****** SAAD A PEACEFUL SOUL ******/

// // using namespace std;
// // double average(vector<int> &salary)
// // {
// //     int Min = INT_MAX;
// //     int Max = INT_MIN;
// //     double avg = 0;
// //     double sum=0;
// //     for (int i = 0; i < salary.size(); i++)
// //     {
// //         Min = min(salary[i], Min);
// //         Max = max(salary[i], Max);
// //         sum += salary[i];
// //     }
// //     sum-=Max;
// //     sum-=Min;
// //     avg = ((sum / (salary.size()-2)) * 1e0);
// //     // return avg;
// //     cout<<avg;
// // }
// // int main(){

// //     // int l,h;
// //     // cin>>l>>h;
// //     // int ct=0;
// //     // for (int i = l; i <= h; i++)
// //     //     if (i&1)
// //     //         ct++;
// //     vector<int> v={6000,9000,8000,3000,2000,1000};
// //     average(v);
// //     // 4750 29000-10000 19000
// // // cout<<ct;
// //     return 0;
// // }

// // MAX SUBARRAY SUM KADANE'S ALGO O(N)
// // #include <bits/stdc++.h>
// // /****** SAAD A PEACEFUL SOUL ******/
// // using namespace std;
// // int main()
// // {
// //     vector<int> n = {-3, 35, -32, -2, -1};
// //     int sum = 0;
// //     int MinSum = INT_MIN;
// //     bool check = false;
// //     int cursum = 0;
// //     for (int i = 0; i < n.size(); i++)
// //     {
// //         MinSum = max(MinSum, n[i]);
// //         if (n[i] > 0)
// //         {
// //             check = true;
// //             break;
// //         }
// //     }
// //     if (!check)
// //     {
// //         cout << MinSum;
// //         return 0;
// //     }
// //     if (check)
// //     {
// //         for (int i = 0; i < n.size(); i++)
// //         {
// //             cursum += n[i];
// //             if (cursum < 0)
// //                 cursum = 0;
// //             if (cursum > sum)
// //                 sum = cursum;
// //         }
// //     }
// //     cout << sum;
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // /****** SAAD A PEACEFUL SOUL ******/
// // using namespace std;
// // int main()
// // {
// //     int nums[] = {3,2,1,2,3};
// //     int n = 5;
// //     map<int, int> mp;
// //     vector<int> v;
// //     map<int, int>::iterator it = mp.begin();
// //     sort(nums,nums+n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         mp[nums[i]]++;
// //         if (it->second > 1)
// //         {
// //             cout<<it->first<<" "<<it->second<<endl;
// //             v.push_back(it->first);
// //         }
// //         it++;
// //     }
// //     // for (auto i : v)
// //     //     cout << i << " ";
// //     // if (v.empty())
// //     //     v.push_back(-1);

// //     // return v;

// //     return 0;
// // }
// // #include <bits/stdc++.h>

// // /****** SAAD A PEACEFUL SOUL ******/

// // using namespace std;

// // int main()
// // {

// //     int n = 6, m = 5,
// // a[] = {1, 2, 3, 4, 5, 6},
// // b[] = {3, 4, 5, 6, 7} ;
// //     set<int> s1;
// //     for (int i = 0; i < n; i++)
// //     {
// //         s1.insert(a[i]);
// //     }
// //     int ct=0;
// //     for (int i = 0; i < m; i++)
// //     {
// //         if (s1.count(b[i]))
// //         {
// //             ct++;
// //         }
// //     }
// //     cout<<ct;
// //     return 0;
// // }

// // CHECK IF IN ARRAY PAIR EXIST WHICH'S SUM IS EQUAL TO THAT OF X VALUE
// //  int main()
// //  {
// //      int N = 5, X = 10,
// //          Arr[] = {1, 2, 4, 3, 6};
// //      unordered_set<int> m;
// //      for (int i = 0; i < N; i++)
// //      {
// //          m.insert(Arr[i]);
// //      }
// //      int sum = 0;
// //      for (int i = 0; i < N; i++)
// //      {
// //          if (m.count(X - Arr[i]))
// //              sum += Arr[i];
// //          if (sum == X)
// //              return true;
// //      }
// //      return 0;
// //  }

// // FIRST REPEATING CHARACTER IN STRING MIN INDEX
// // int main()
// // {
// //     string str = "adcffaet";
// //     string patt = "onkl";
// //     set<char>s;
// //     for (int i = 0; i < patt.length(); i++)
// //     {
// //         s.insert(patt[i]);
// //     }
// //     for (int i = 0; i < str.length(); i++)
// //     {
// //         if (s.count(str[i]))
// //         {
// //             cout << i;
// //             break;
// //         }
// //     }
// //     cout<<"-1";
// //     return 0;
// // }

// // VECTOR PAIR SUM
// //  void sum(vector<pair<int, int>> v)
// //  {int sum=0;
// //  pair of ints will be given we have to get the sum of the second of that
// //      for(auto i: v)
// //      {
// //          sum+=i.second;
// //      }
// //      cout<<sum;
// //  }

// // NEXT GREATER ELEMENT FROM THE STACK
// //  vector<long long> nextLargerElement(vector<long long> arr, int n)
// //  {
// //      // Your code here
// //      stack<int> s;
// //      vector<long long> v(n);
// //      for (int i = n - 1; i >= 0; i--)
// //      {
// //          while (!s.empty())
// //          {
// //              if (arr[i] < s.top())
// //                  break;
// //              s.pop();
// //          }
// //          if (s.empty())
// //              v[i] = -1;
// //          else
// //              v[i] = s.top();
// //          s.push(arr[i]);
// //      }
// //      return v;
// //  }

// // void reArng(int A[],int n){
// //     // {1,2,3,4,5,6}
// //     // {6,1,2,3,4,5}
// //     // {6,1,5,2,3,4}
// // }
// // #include <bits/stdc++.h>

// // /****** SAAD A PEACEFUL SOUL ******/

// // using namespace std;
// // bool ElemRange (int arr[],int a,int b,int n)
// // {
// //    bool check=false;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i]>=a && arr[i]<=b)
// //         {
// //             check=true;
// //         }
// //         if (/* condition */)
// //         {
// //             /* code */
// //         }

// //     }

// // }
// // int minimumOperations(int A[], int n)
// // {
// //     int X = 1;
// //     bool c=true;
// //     int i;
// //     for (i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             if (A[i] != 0)
// //                 c = false;
// //             A[i] = A[i] - X;
// //             X = min(A[i], X);
// //             if (A[i] < 0)
// //                 A[i] = 0;
// //             if(X<0)
// //                 X=1;
// //         }
// //         if (c)
// //             break;
// //         c = true;
// //         X++;
// //     }
// //     cout << i+1;
// // }

// // int nearestValidPoint(int x, int y, vector<vector<int>> &points)
// // {
// //     int n = points.size();
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int i = 0; i < n; i++)
// //         {
// //         }
// //     }
// // }

// // const int N = 1e5 + 7;
// // int dp[N];
// // long Stairs(long n)
// // {
// //     if (n < 0)
// //         return 0;
// //     if (n == 0)
// //         return 1;
// //     if (dp[n] != -1)
// //         return dp[n];e
// //     return dp[n] = Stairs(n - 1) + Stairs(n - 2);
// // }
// // void sayDigit(int n, string a[])
// // {

// //     if (n == 0)
// //         return;
// //     int digit = n % 10; // 1 1 2
// //     n = n / 10;
// //     sayDigit(n, a);
// //     cout << a[digit] << " ";
// // }
// // int main()
// // {
// //     // memset(dp, -1, sizeof(dp));
// //     int nums[] = {1, 5, 0, 3, 5};
// //     int n = 5;
// //     string A[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// //     // vector<vector<int>> points = {{1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};
// //     // int x = 3, y = 4;
// //     minimumOperations(nums, n);
// //     // int N = 7, A = 2, B = 5,
// //     // cout << Stairs(111);

// //     //     arr[] = {1, 4, 5, 2, 7, 8, 3};
// //     // int n;
// //     // cin >> n;
// //     // sayDigit(n, A);
// //     return 0;
// // }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// vector<long long> nextLargerElement(vector<long long> &arr, int n)
// {
//     // Your code here
//     stack<int> s;
//     stack<int> b;
//     vector<int> ps(n);
//     vector<int> ns(n);
//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty())
//         {
//             if (arr[i] >= arr[s.top()])
//                 break;
//             s.pop();
//         }
//         if (s.empty())
//             ps[i] = -1;
//         else
//             ps[i] = s.top();
//         s.push(i);
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!b.empty())
//         {
//             if (arr[i] >= arr[b.top()]) // 4> arr[8]
//                 break;
//             b.pop();
//         }
//         if (b.empty())
//             ns[i] = 9;
//         else
//             ns[i] = b.top();
//         b.push(i);
//     }
//     for (auto i : ps)
//         cout << i << " ";
//     cout << endl;
//     for (auto i : ns)
//         cout << i << " ";
//     cout << "\n";
//     int mxArea = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int len = (((ns[i] - ps[i]) - 1) * arr[i]);
//         mxArea = max(mxArea, len);
//         cout << len << " " << i << endl;
//     }
//     cout << mxArea;
//     // return v;
// }
// // AREA = max(AREA,NS[I]-PS[I]-1);
// vector<int> farNumber(int N, vector<int> &A)
// {
//     vector<int> v;
//     int ind = 0;
//     int maxInd = INT_MIN;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             if (A[i] > A[j])
//             {
//                 ind = j;
//                 maxInd = (maxInd, ind);
//             }
//         }
//         if (maxInd == INT_MIN)
//             v.push_back(-1);
//         v.push_back(maxInd);
//         ind = 0;
//         maxInd = INT_MIN;
//     }

//     for (auto i : v)
//         cout << i << " ";
// }
// int main()

// {
//     // vector<long long> A = {4, 2, 1, 5, 6, 3, 2, 4, 2};
//     // vector<long long> A = {7, 2, 8, 9, 1, 3, 6, 5};
//     // vector<long long> A = {6, 2, 5, 4, 5, 1, 6};
//     //  -1 -1 1 1 3 -1 5
//     //  1 5 3 5 5 9 9
//     // {4, 2, 1, 5, 6, 3, 2, 4, 2};
//     // {-1, -1, -1, 2, 3, 2, 2, 6, 2};
//     // {1, 2, 9, 5, 5, 6, 9, 8, 9};
//     // ans=12;
//     // int n = A.size();
//     // nextLargerElement(A, n);

//     //

//     return 0;
// }

// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;

// vector<int> farNumber(int N, vector<int> &A)
// {
//     vector<int> v;
//     int ind = 0;
//     int maxInd = INT_MIN;
//     for (int i = 0; i < N; i++)
//     {
//         // ind = 0;
//         maxInd = INT_MIN;
//         for (int j = i + 1; j < N; j++)
//         {
//             if (A[i] > A[j])
//             {
//                 // ind = j;
//                 maxInd = (maxInd, j);
//             }
//         }
//         if (maxInd == INT_MIN)
//         {
//             v.push_back(-1);
//         }
//         if(maxInd>= 0)
//             v.push_back(maxInd);
//         // cout<<" max ind "<<maxInd;
//     }

//     for (auto i : v)
//         cout << i << " ";
// }

// int main()
// {
//     vector<int> Arr = {1, 2, 3, 4, 0};
//     int N = Arr.size();
//     farNumber(N, Arr);

//     return 0;
// }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// int Sum(int i, int n, int &sum)
// {
//     if (i == n)
//     {
//         sum += i;
//         return sum;
//     }
//     Sum(i + 1, n, sum);
//     sum += i;
//     return sum;
// }
// int main()
// {
//     int sum=0;
//     cout << Sum(1, 5, sum);

//     return 0;
// }
// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// // long long power(int N, int R)
// // {
// //     // Your code here
// //     long long Mod = 1e9 + 7;
// //     if (R == 0)
// //         return 1;
// //     if (R & 1)
// //         return (power(N, R / 2))%Mod * (power(N, R / 2))%Mod * N%Mod;
// //     else
// //         return ((power(N, R / 2))%Mod * (power(N, R / 2))%Mod)%Mod;
// //     // if (R | 1)
// //     //     return ((power(N, R / 2) % Mod) * (power(N, R / 2) % Mod)) % Mod;
// //     // else
// //     //     return ((power(N, R / 2) % Mod) * (power(N, R / 2) % Mod)) % Mod * (N % Mod);
// // }
// const int m=1e3+7;
// const int n=1e3+7;
// int dp[m][n];
// int uniquePaths(int m, int n)
// {
//     if (n == 1 || m == 1)
//         return 1;
//     if (dp[m][n] != -1)
//         return dp[m][n];
//     return dp[m][n] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
//     // return (uniquePaths(m - 1, n) + uniquePaths(m, n - 1));
// }
// int main()
// {
//     memset(dp,-1,sizeof(dp));
//     // int N = 26;
//     // int A[] = {13, 9, 25, 1, 1, 0, 22, 13, 22, 20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14};
//     // cout << power(12, 21);
//     cout<<uniquePaths(3,7);
//     return 0;
// }

#include<bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
//TOWER OF HANOI

int main(){

    


    return 0;
}