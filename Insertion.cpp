#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <iomanip>
#include <climits>
#include <algorithm>

using namespace std;
void show(int arr[], int s)
{   //Traversal
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int indInsertion(int arr[], int elem, int cap, int size, int ind)
{   //Insertion
    if (size>=cap)
    {
        return 0;
    }
    for (int i = size - 1; i >= ind; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[ind]=elem;
    return 1;

}
int indDeletion(int arr[], int size, int ind)
{   //Deletion
    if (ind>size)
    {
        return 0;
    }
    for (int i = ind; i <size-1; i++)
    {
        cout<<"i = "<<i;
        arr[i] = arr[i+1];
    }
    // arr[ind]=elem;
    return 1;

}
int main()
{

    int arr[100] = {1, 5, 8, 15};
    int size = 4, cap = 100, elem = 30, ind = 2;
    show(arr, size);
    // bool check= indInsertion(arr, elem, cap, size, ind);
    // if (check)
    // {   size++;
    //     show(arr, size);
    // }
    // else{
    //     cout<<"Insetion Failed Try Again";
    // }
    bool check= indDeletion(arr, size, ind);
    if (check)
    {   
        size--;
        show(arr, size);
    }
    else{
        cout<<"Deletion Failed Try Again";
    }
    
    return 0;
}