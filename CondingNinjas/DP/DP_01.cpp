#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

int minimumCostWay(int * Cost,int n){
    
    if(n == 0)
        return Cost[0];
    if(n == 1)
        return Cost[1];
    
    return Cost[n] + min(minimumCostWay(Cost,n-1),minimumCostWay(Cost,n-2));
}
int main(){

    int n;
    cin >> n;
    int *Cost = new int[n];

    for (int i = 0; i < n-1; i++)
    {
        cin >> Cost[i];
    }
    cout << minimumCostWay(Cost,n) << endl;

    return 0;
}