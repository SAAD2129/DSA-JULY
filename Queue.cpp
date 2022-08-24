// #include <bits/stdc++.h>

// /****** SAAD A PEACEFUL SOUL ******/

// using namespace std;
// // class Queue
// // {
// // public:
// //     int data;
// //     Queue *front;
// //     Queue *rear;
// //     Queue *next;
// //     Queue() {}
// //     Queue(int d)
// //     {
// //         data = d;
// //         next = NULL;
// //     }
// //     void enque(int data)
// //     {
// //         Queue *newNode = new Queue(data);
// //         if (front == NULL)
// //         {
// //             front = rear = newNode;
// //             return;
// //         }
// //         rear->next = newNode;
// //         rear = newNode;
// //     }
// //     int deenque()
// //     {

// //         if (front == NULL)
// //         {
// //             return 0;
// //         }
// //         int result = front->data;
// //         front = front->next;
// //         return result;
// //     }
// // };
// class Queue
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int d)
//     {
//         s1.push(d);
//     }
//     int pop()
//     {
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         int ans = s2.top();
//         s2.pop();
//         while (!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//         return ans;
//     }
// };
// class myStack
// {
//     queue<int> q1;
//     queue<int> q2;

// public:
//     void push(int d)
//     { // 1
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.push(d);
//         while (!q2.empty())
//         {
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
//     int pop()

//     {
//         if (!q1.empty())
//         {
//             int d = (q1.front());
//             q1.pop();
//              return d;
//         }
//         return -1;
//     }
// };
//  int main()
// {
//     // Queue q;
//     // q.push(123);
//     // q.push(12323);
//     // cout << q.pop() << " ";
//     // cout << q.pop();
//     myStack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.pop()<<" ";
//     cout<<st.pop()<<" ";
//     cout<<st.pop()<<" ";
//     // Queue * q;
//     // q->enque(32);
//     // cout<<q->data;
//     return 0;
// }
#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

int main()
{

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	int k = 3;
	stack<int> aux;
	for (int i = 0; i < k; i++)
	{
		aux.push(q.front());
		q.pop();
	}
	for (int i = 0; i < k; i++)
	{
		// q.front()=aux.top();
		cout << aux.top();
		aux.pop();
	}
	for (int i = 0; i < k; i++)
	{
		cout << q.front();
		q.pop();
	}

	return 0;
}