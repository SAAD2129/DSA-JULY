// // // #include <bits/stdc++.h>

// // // /*
// // //  *** Saad a Peaceful Soul ***
// // //  */
// // // using namespace std;

// // // vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
// // // {

// // // 	vector<long long> ans;
// // // 	deque<long long int> q;

// // // 	for (int i = 0; i < K; ++i)
// // // 	{
// // // 		if (A[i] < 0)
// // // 			q.push_back(i);
// // // 	}
// // // 	if (q.size() > 0)
// // // 		ans.push_back(A[q.front()]);
// // // 	else
// // // 		ans.push_back(0);

// // // 	for (int i = K; i < N; ++i)
// // // 	{

// // // 		if (!q.empty() && i - q.front() >= K)
// // // 			q.pop_front();
// // // 		if (A[i] < 0)
// // // 			q.push_back(i);

// // // 		if (q.size() > 0)
// // // 			ans.push_back(A[q.front()]);
// // // 		else
// // // 			ans.push_back(0);
// // // 	}
// // // 	return ans;
// // // }

// // // void ReverseK(queue<int> &q, int K){

// // // 	//Approach One
// // // 	// queue<int> qmain;
// // // 	// stack<int> st;
// // // 	// int size = q.size()-K;
// // // 	// while (q.size()!=size)
// // // 	// {
// // // 	// 	st.push(q.front());
// // // 	// 	q.pop();
// // // 	// }
// // // 	// while(!st.empty())
// // // 	// {
// // // 	// 	qmain.push(st.top());
// // // 	// 	st.pop();
// // // 	// }
// // // 	// while (!q.empty())
// // // 	// {
// // // 	// 	qmain.push(q.front());
// // // 	// 	q.pop();
// // // 	// }
// // // 	// return qmain;

// // // 	//Approach Two
// // // 	stack<int> st;
// // // 	int size = q.size() -K;
// // // 	while(q.size() > size)
// // // 	{
// // // 		st.push(q.front());
// // // 		q.pop();
// // // 	}
// // // 	while (!st.empty())
// // // 	{
// // // 		q.push(st.top());
// // // 		st.pop();
// // // 	}
// // // 	while(size--){
// // // 		q.push(q.front());
// // // 		q.pop();
// // // 	}

// // // }
// // // int main()
// // // {

// // // 	long long N = 8;
// // // 	// long long A[]={-8, 2, 3, -6, 10};
// // // 	long long A[] = {12, -1, -7, 8, -15, 30, 16, 28};
// // // 	long long K = 5;

// // // 	// Output
// // // 	//  -8 0 -6 -6
// // // 	// vector<long long> vec = printFirstNegativeInteger(A, N, K);
// // // 	queue<int> q;
// // // 	q.push(12);
// // // 	q.push(5);
// // // 	q.push(8);
// // // 	q.push(15);
// // // 	q.push(12);
// // // 	q.push(1284);
// // // 	q.push(128);
// // // 	q.push(132);
// // // 	ReverseK(q, K);

// // // 	cout << endl;
// // // 	while(!q.empty()){
// // // 		cout<<q.front()<<" ";
// // // 		q.pop();
// // // 	}
// // // 	return 0;
// // // }

// // // DEQUE IMPLEMENTATION
// // //  #include<bits/stdc++.h>

// // // /*
// // // 	*** Saad a Peaceful Soul ***
// // // */
// // // using namespace std;

class Queue{
	int rear;
	int *arr;
	int front;
	int size;
	public:
	Queue(int n){
		size = n;
		arr = new int[size];
		front = rear = -1;
	}
	void pop_front(){
		if(empty()){
			cout<<"Q is Empty "<<endl;
			return;
		}
		arr[front] = -1;
		if(front == rear){
			front = rear = -1;
			return;
		}
		front++;
		if(front == size){
			front = 0;
		}
	}
	void pop_back(){
		if(empty()){
			cout<<"Q is Empty " << endl;
			return;
		}
		arr[rear] = -1;
		if(front == rear){
			front = rear = -1;
			return;
		}
		rear--;
		if(rear == 0){
			rear = size-1;
		}
	}
	void push_back(int val){
		if(full()){
			cout<<"Q is Empty " << endl;
			return;
		}
		if(empty()){
			front = rear = 0;
		}
		else if(rear == size - 1){
			rear = 0;
		}
		else{
			rear++;
		}
		arr[rear] = val;
	}
	void push_front(int val){
		if(full()){
			cout<<"Q is Empty " << endl;
			return;
		}
		if(front == rear == -1){
			front = rear = 0;
		}
		else if(front == 0){
			front = size -1;
		}
		else{
			front--;
		}
		arr[front] =val;
	}
	bool full(){
		return (front == rear+1 || (front == 0 && rear == size-1));
	}
	bool empty(){
		return (front == -1 && rear == -1);
	}
	int Front(){
		return arr[front];
	}
	int back(){
		return arr[rear];
	}
// // // };
// // // int main(){

// // // 	Queue q(5);
// // // 	q.push_back(35);
// // // 	q.push_back(53);
// // // 	q.push_front(1);
// // // 	q.push_back(34);
// // // 	q.pop_front();
// // // 	q.pop_back();
// // // 	cout<<q.Front() << endl;
// // // 	cout<<q.back() << endl;

// // // 	return 0;
// // // }
// // // #include<bits/stdc++.h>

// // // /*
// // // 	  *** Saad a Peaceful Soul ***
// // // */
// // // using namespace std;
// // // void insertBottom(stack<int> &st,int top){
// // // 	if(st.empty())
// // // 	{
// // // 		st.push(top);
// // // 		return;
// // // 	}
// // // 	int val = st.top();
// // // 	st.pop();
// // // 	insertBottom(st,top);
// // // 	st.push(val);
// // // }
// // // void Reverse(stack<int> &st){
// // // 	if(st.empty()){
// // // 		return;
// // // 	}
// // // 	int top = st.top();
// // // 	st.pop();
// // // 	Reverse(st);
// // // 	insertBottom(st, top);
// // // }
// // // void Half(queue<int> &q){
// // // 	stack<int> st;
// // // 	int size = q.size() / 2;
// // // 	while (st.size() < size)
// // // 	{
// // // 		int data = q.front();
// // // 		q.pop();
// // // 		st.push(data);
// // // 	}

// // // 	// Reverse(st);
// // // 	while (!st.empty())
// // // 	{
// // // 		q.push(st.top());
// // // 		st.pop();
// // // 	}

// // // 	while(!st.empty()){
// // // 		q.push(st.top());
// // // 		st.pop();
// // // 		q.push(q.front());
// // // 		q.pop();
// // // 	}

// // // }
// // // void PrintQ(queue<int>q){
// // // 	while(!q.empty()){
// // // 		cout<<q.front()<<" ";
// // // 		q.pop();
// // // 	}
// // // 	cout<<endl;
// // // }
// // // int main(){

// // // 	queue<int> q;
// // // 	q.push(11);
// // // 	q.push(12);
// // // 	q.push(13);
// // // 	q.push(14);
// // // 	q.push(15);
// // // 	q.push(16);
// // // 	q.push(17);
// // // 	q.push(18);
// // // 	// PrintQ(q);
// // // 	Half(q);
// // // 	PrintQ(q);
// // // 	return 0;
// // // }

// // #include <bits/stdc++.h>

// // /*
// //  *** Saad a Peaceful Soul ***
// //  */
// // using namespace std;

// // class kQueue{

// // 	int* arr;
// // 	int* rear;
// // 	int* front;
// // 	int k;
// // 	int n;
// // 	int* next;
// // 	int freeSpot;

// // 	public:
// // 	kQueue(int n,int k){
// // 		this -> n = n;
// // 		this -> k = k;
// // 		front = new int[k];
// // 		next = new int[n];
// // 		rear = new int[k];
// // 		arr = new int[n];
// // 		for(int i = 0; i < k; ++i){
// // 			rear[i] = -1;
// // 			front[i] = -1;
// // 		}
// // 		for(int i = 0; i < n; ++i){
// // 			next[i] = i+1;
// // 		}
// // 		next[n-1] = -1;
// // 		freeSpot = 0;
// // 	}

// // 	//PUSHING OPERATION
// // 	void enqueue(int data,int qn){ //3 1

// // 		if(freeSpot == -1){

// // 			cout << "Queue is Full " << endl;
// // 			return;
// // 		}

// // 		//Getting where element to be placed
// // 		int index = freeSpot;
// // 		arr[index] = data;
// // 		// Updating the next place
// // 		freeSpot = next[index];

// // 		// checking if it is the first element
// // 		if(front [qn -1 ] == -1){

// // 			front[qn-1] = index;
// // 		}
// // 		else{
// // 			//linking new element to previous
// // 			next[rear[qn-1]] = index;
// // 		}

// // 		//Updating next
// // 		next[index] = -1;

// // 		//Updating rear
// // 		rear[qn-1] = index;
// // 	}

// // 	//POPPING OPERATION
// // 	int dequeue(int qn){
// // 		if(front[qn-1] == -1){

// // 			cout << "Queue is Empty " << endl;
// // 			return -1;
// // 		}

// // 		//getting index which element to be deleted
// // 		int index = front[qn-1];

// // 		// incrementing the front
// // 		front[qn-1] = next[index];

// // 		//Managing the freespot
// // 		next[index] = freeSpot;
// // 		freeSpot = index;
// // 		return arr[index];
// // 	}
// // };
// // int main(){

// // 	kQueue q(10,3);
// // 	q.enqueue(3,1);
// // 	q.enqueue(5,2);
// // 	q.enqueue(1,3);
// // 	int t;
// // 	cin >> t;
// // 	while(t--){

// // 		int n;
// // 		cin >> n;
// // 	}
// // 	cout << q.dequeue(1) << endl;
// // 	cout << q.dequeue(2) << endl;
// // 	cout << q.dequeue(3) << endl;

// // 	return 0;
// // }
// // #include <bits/stdc++.h>

// // /*
// //  *** Saad a Peaceful Soul ***
// //  */
// // using namespace std;

// // vector<int> max_of_subarrays(int *arr, int n, int k)
// // {
// // 	deque<int> dq;
// // 	vector<int> ans;
// // 	int Max = INT_MIN;

// // 	for (int i = 0; i < k; ++i)
// // 	{

// // 		dq.push_back(arr[i]);
// // 		Max = max(arr[i], Max);
// // 	}

// // 	ans.push_back(Max);

// // 	for (int i = k; i < n; ++i)
// // 	{

// // 		dq.pop_front();
// // 		dq.push_back(arr[i]);

// // 		if (arr[i] >= Max)
// // 		{

// // 			Max = arr[i];
// // 		}

// // 		ans.push_back(Max);
// // 	}

// // 	return ans;
// // }
// // int main()
// // {
// // 	int n;
// // 	int k;
// // 	// cin >> n >> k;
// // 	cin >> n;
// // 	int *A = new int[n];
// // 	int Max = INT_MIN;
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		cin>>A[i];
// // 		Max = max(A[i],Max);
// // 	}
// // 	cout << Max << endl;
// // 	// vector<int> ans = max_of_subarrays(A,n,k);
// // 	// for(auto i : ans)
// // 	// 	cout << i << " ";
// // 	return 0;
// // }
// // #include <bits/stdc++.h>

// // /*
// //  *** Saad a Peaceful Soul ***
// //  */
// // using namespace std;

// // int MxSum(int *a, int size, int k)
// // {
// // 	deque<int> maxi;
// // 	deque<int> mini;

// // 	for (int i = 0; i < k; i++)
// // 	{
// // 		//Checking if there is lesser element then current element then it will be popped out
// // 		while (!maxi.empty() && a[i] >= a[maxi.back()])
// // 		{
// // 			maxi.pop_back();
// // 		}

// // 		//Checking if there is greater element then current element then it will be popped out
// // 		while (!mini.empty() && a[i] <= a[mini.back()])
// // 		{
// // 			mini.pop_back();
// // 		}
// // 		// Adding the Current elements index
// // 		maxi.push_back(i);
// // 		mini.push_back(i);
// // 	}
// // 	int sum = 0;
// // 	sum +=  a[mini.front()] + a[maxi.front()];
// // 	for (int i = k; i < size; i++)
// // 	{

// // 		//Removal
// // 		while (!maxi.empty() && i - maxi.front() >= k)
// // 		{
// // 			maxi.pop_front();
// // 		}
// // 		while (!mini.empty() && i - mini.front() >= k)
// // 		{
// // 			mini.pop_front();
// // 		}

// // 		//Addition Same as that of line number 474
// // 		while (!maxi.empty() && a[i] >= a[maxi.back()])
// // 		{
// // 			maxi.pop_back();
// // 		}

// // 		//Addition Same as that of line number 480
// // 		while (!mini.empty() && a[i] <= a[mini.back()])
// // 		{
// // 			mini.pop_back();
// // 		}
// // 		maxi.push_back(i);
// // 		mini.push_back(i);

// // 		//Computing the sum
// // 		sum +=  a[mini.front()] + a[maxi.front()];
// // 	}
// // 	return sum;
// // }
// // int main()
// // {

// // 	int a[] = {2, 5, -1, 7, -3, -1, -2}; // 8
// // 	int size = 7;
// // 	cout << MxSum(a, size, 4);

// // 	return 0;
// // }

// #include<bits/stdc++.h>

// /*
// 	  *** Saad a Peaceful Soul ***
// */
// using namespace std;

// vector<int> NextGreater(vector<int>&next){

// 	stack<int> st;
// 	vector<int> temp;
// 	int n = next.size();

// 	for (int i = n-1; i >= 0 ; --i){

// 		while (!st.empty())
// 		{
// 			if(next[i] >= st.top())
// 				break;
// 			st.pop();
// 		}
// 		if(st.empty())
// 			temp.push_back(-1);
// 		else
// 			temp.push_back(st.top());
// 		st.push(next[i]);
// 	}

// 	reverse(temp.begin(),temp.end());
// 	for(auto i : temp)
// 		cout << i <<" ";
// 		cout << endl;
// 		return temp;
// }
// vector<int> PrevGreater(vector<int>&prev){

// 	stack<int> st;
// 	vector<int> temp;
// 	int n = prev.size();
// 	// for(auto i : prev)
// 	// 	cout << i << " ";
// 	for (int i = 0; i < n; ++i){

// 		while (!st.empty())
// 		{
// 			if(prev[i] <= st.top())
// 				break;
// 			st.pop();
// 		}
// 		if(st.empty())
// 			temp.push_back(-1);
// 		else
// 			temp.push_back(st.top());
// 		st.push(prev[i]);
// 	}
// 	// reverse(temp.begin(),temp.end());
// 	for(auto i : temp)
// 		cout << i <<" ";
// 		return temp;
// }
// int MaxAreaRectagle(vector<vector<int>>&buildings )
// {
// 	vector<int> next =  NextGreater(buildings[0]);
// 	vector<int> prev =  PrevGreater(buildings[0]);
// 	int Area = 0;
// 	for (int i = 0; i < buildings[0].size(); i++)
// 	{
// 		Area += next[i] - prev[i] -1;
// 	}

// 	return Area;
// }
// int main(){

// 	vector<vector<int>> Buildings= {{0,5,4,5}};
// 	cout << MaxAreaRectagle(Buildings) << endl;
// 	queue<int> q;
// 	return 0;
// }
