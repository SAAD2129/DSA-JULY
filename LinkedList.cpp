#include <bits/stdc++.h>

/****** SAAD A PEACEFUL SOUL ******/

using namespace std;

// GLOBAL VARIABLES

bool check = false;
// NODE CREATING CLASS
class Node
{
public:
    int data;
    Node *next;
    // Node *random;
    Node() {}
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
// INSERTION IN THE LINKED LIST FUNCTION GETS HEAD OF THE LINKED LIST ELEMENT & POSITION
void LinkInsertion(Node *&head, int elem, int pos)
{
    Node *newNode = new Node(elem);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *Pointer = head;
    for (int i = 0; i < pos - 1; i++)
    {
        Pointer = Pointer->next;
    }
    newNode->next = Pointer->next;
    Pointer->next = newNode;
}

// DELETION IN THE LINKED LIST FUNCTION GETS HEAD OF THE LINKED LIST POSITION
void LinkDelete(Node *&head, int pos)
{
    if (pos == 0)
    {
        head = head->next;
    }
    Node *Pointer = head;
    for (int i = 0; i < pos - 1; i++)
    {
        Pointer = Pointer->next;
    }
    Pointer->next = Pointer->next->next;
    return;
}

// REVERSE THE LINKED LIST USING ITERATION FUNCTION GETS HEAD OF THE LINKED LIST
Node *ReverseLink(Node *&head)
{
    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

// REVERSE THE LINKED LIST USING RECURSION FUNCTION GETS HEAD OF THE LINKED LIST
Node *RecurReverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = RecurReverse(head->next);
    Node *headNext = head->next;
    headNext->next = head;
    head->next = NULL;
    return newHead;
}

// PRINTER OF THE LINKED LIST FUNCTION GETS HEAD OF THE LINKED LIST
void PrintLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
void PrintCycledList(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp == head);
    cout << "\n";
}
// LEGTH CALCULATER
int Counter(Node *head)
{
}
// MIDDLE ELEMENT OF THE LINKED LIST FUNCTION GETS HEAD OF THE LINKED LIST
Node * MidElement(Node *head)
{

    // Your code
    if(head->next ==NULL || head ==NULL){
        return head;
    }
    Node *Fast = head;
    Node *Slow = head;
    Node *temp = head;
    int count = Counter(head);
    // cout<<count;
    if (count % 2 != 0)
    {
        while (Fast->next != NULL && Fast != NULL)
        {
            Slow = Slow->next;
            Fast = Fast->next->next;
        }
        return Slow;
    }

    else
    {
        for (int i = 1; i < (count / 2) + 1; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
}

// PALINDROME CHECK FUNCTION GETS HEAD OF THE LINKED LIST
// bool Palindrom(Node *head)
// {
//     if (head == NULL)
//         true;
//     Node *mid = MidElement(head);
//     Node *last = ReverseLink(mid->next);
//     Node *cur = head;
//     while (last != NULL)
//     {
//         if (last->data != cur->data)
//             return false;
//         last = last->next;
//         cur = cur->next;
//     }
//     return true;
// }
// CYCLE DETECTING FUNCTION GETS HEAD OF THE LINKED LIST
Node *DetectCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    Node *temp;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            check = true;
            return slow;
        }
    }
}
// CYCLE START TELLING FUNCTION GETS HEAD OF THE LINKED LIST
Node *CycleStart(Node *head)
{
    Node *cur = head;
    Node *Temp = DetectCycle(head);
    Node *t;
    while (cur != Temp)
    {
        cur = cur->next;
        Temp = Temp->next;
    }
    return Temp;
}

Node *Duplicate(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        Node *Temp = cur->next;
        // cur->next = new Node(cur->data);
        cur->next->next = Temp;
        cur = Temp;
    }
    cur = head;
    while (cur != NULL)
    {
        if (cur->next != NULL)
        {
            // cur->next->random = (cur->random != NULL) ? cur->random->next : NULL;
        }
        cur = cur->next->next;
    }
    Node *orig = head;
    Node *copy = head->next;
    Node *Temp = copy;
    while (orig != NULL)
    {
        orig->next = orig->next->next;
        copy->next = copy->next->next;
        orig = orig->next;
        copy = copy->next;
    }
    cout << Temp->data;
    return Temp;
}
Node *RemoveCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    Node *temp;
    Node *cur = head;
    Node *newHead = cur;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            temp = slow;
            break;
        }
    }
    while (cur != temp)
    {
        temp = temp->next;
        cur = cur->next;
    }
    cur->next = NULL;
    return newHead;
}
int LengthCycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    Node *temp;
    int count = 0;
    Node *cur = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            temp = slow;
            break;
        }
    }
    while (cur != temp)
    {
        temp = temp->next;
        cur = cur->next;
    }
    cur = temp;
    do
    {
        count++;
        temp = temp->next;
    } while (cur != temp);

    return count;
}
// BEGINING INSERTION

Node *Insertion(Node *&head)
{
    Node *newHead = new Node(head->data);
    Node *temp = newHead;
    // cout<<temp->data;
    while (head != NULL)
    {
        if (head->next->data == 0)
        {
            Node *newNode = new Node(head->data);
            newNode->next = newHead;
            newHead = newNode;
        }
        if (head->next->data == 1)
        {
            Node *newNode = new Node(head->data);
            // do
            // {
            //     temp = temp->next;
            // } while (temp != NULL);
            temp->next = newNode;
        }
        head = head->next->next;
    }
    return newHead;
}
bool isCircular(Node *head)
{
    // Your code here
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp == head)
            return true;

        temp = temp->next;
    }
    return false;
}
int main()
{
    // FOUR NODES CREATED;
    Node *head = new Node;
    Node *n1 = new Node(9);
    Node *n2 = new Node(0);
    Node *n3 = new Node(5);
    Node *n4 = new Node(1);
    Node *n5 = new Node(6);
    Node *n6 = new Node(1);
    Node *n7 = new Node(2);
    Node *n8 = new Node(0);
    Node *n9 = new Node(5);
    Node *n10 = new Node(0);
    // CREATING CYCLE FROM LINKED LIST
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n4;
    Node *newHead;
    DetectCycle(head);
    if (check)
    {
        cout << "have cycle";
        newHead = RemoveCycle(head);
    }
    Node *t = newHead;
    while (t != NULL)
    {
        cout << t->data;
        t = t->next;
    }
    // CREATING CHAIN OR IN EASY WORDS LINKED LIST
    // head = n1;
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;
    // n4->next = n5;
    // n5->next = n6;
    // n6->next = n7;
    // n7->next = n8;
    // n8->next = n9;
    // n9->next = n10;
    // n10->next = NULL;
    // Node *SecondList = Insertion(head);
    // cout << SecondList->data;
    // cout<<isCircular(head);
    // PrintLinkedList(SecondList);
    // cout<<SecondList->data;
    // cout << SecondList->next->data;
    // cout << SecondList->next->next->data;
    // cout << SecondList->next->next->next->data;
    // cout << SecondList->next->next->next->next->data;
    // cout<<SecondList->next->data;
    // LinkedList:
    //     9->0->5->1->6->1->2->0->5->0
    //  Output : 5 2 9 5 6

    // DETECTING A CYCLE FLOYD'S CYCLE ALGORITHAM
    // Node *newHead = RemoveCycle(head);
    // cout << LengthCycle(head);
    // PrintLinkedList(newHead);
    // cout<<newHead->data<<" ";
    // cout<<newHead->next->data<<" ";
    // cout<<newHead->next->next->data<<" ";
    // cout<<newHead->next->next->next->next<<" ";
    // cout<<newHead->data;
    // cout<<newHead->data;
    // cout<<newHead->data;
    // PrintLinkedList(newHead);
    // CycleStart(head);
    // PrintLinkedList(head);
    // DetectCycle(head);
    // if (check) // CYCLE START POINT
    // cout << "Cycle Start " << CycleStart(head)->data;
    // PrintLinkedList(head);
    // INSERTING THE NODE THREE AT POSITION 3 0 BASE INDEXING
    // LinkInsertion(head, 3, 2);
    // PrintLinkedList(head);

    // DELETING THE NODE
    // PrintLinkedList(head);

    // REVERSING THE LINKED LIST USING ITERATION
    // ReverseLink(head);
    // PrintLinkedList(n7);

    // REVERSING THE LINKED LIST USING RECURSION
    // Node *NewNode = RecurReverse(head);
    // PrintLinkedList(NewNode);
    // MidElement(head);
    // cout <<n;
    // PrintLinkedList(head);
    // cout << Palindrom(head);

    // cout <<MidElement(head)->data;

    // DUPLICATE RANDOM POINTERS
    // Node *newList = Duplicate(head);
    // PrintLinkedList(newList);
    return 0;
}