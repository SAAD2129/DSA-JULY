#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;
int KthLargest(int a[], int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(a[i]);
    }
    for (int i = k; i < k; i++)
    {
        if (pq.top() < a[i])
        {
            pq.pop();
            pq.push(a[i]);
        }
    }
}
// FIND MEDIAN
int median(int a[], int n)
{
    priority_queue<int> MaxHeap;
    priority_queue<int> MinHeap;
    // int arr[] = {3, 5, 7, 8 , 12, 37, 59};
    for (int i = 0; i < n / 2+1; i++)
    {
        MaxHeap.push(a[i]);
    }
    for (int i = ceil(n / 2)+1; i < n; i++)
    {
        MinHeap.push(-a[i]);
    }
    for (int i =  ceil(n / 2)+1; i < n; i++)
    {   //IN THE  NAME OF ALMIGHTY ALLAH 
        cout<<-MinHeap.top()<<" ";
        MinHeap.pop();
    }
    
    if (MaxHeap.size() > MinHeap.size() + 1)
    {
        MinHeap.push(-MaxHeap.top());
    }
    if (MaxHeap.size() < MinHeap.size())
    {
        MaxHeap.push(-MinHeap.top());
    }

    if (MaxHeap.size()==MinHeap.size())
        return double(MinHeap.top() + (-MaxHeap.top())) / 2;
    
        return MaxHeap.top();
}
int main()
{
    int arr[] = {3, 5, 7, 8, 12, 37, 59};
    int n = sizeof(arr) / sizeof(int);
    // median(arr, n);
    cout<<median(arr, n);
    // priority_queue<int> pq;
    // pq.push(-2);
    // pq.push(-5);
    // pq.push(-4);
    // pq.push(-8);
    // pq.push(-6);
    // pq.push(-9);
    // int maxSum = 0;
    // while (pq.size() > 4)
    // {
    // }
    // cout << maxSum;
    // cout<<-pq.top();

    return 0;
}