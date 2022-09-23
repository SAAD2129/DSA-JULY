#include<bits/stdc++.h>

#define ll long long
#define lli ll int
#define vi vector<int>
#define vs vector<string>
#define vss vector<vs>
#define vc vector<char>
#define vii vector<vi>
#define pii pair<int,int>
#define vip vector<pii>
#define ff first
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul 7 Star ==> Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

//Driver Code 
int main(){

    int n;
    cin >> n;
    vii A;
    rep( i, 0, n ) {
        int start,end;
        cin >> start >> end;
        A.push_back({start,end});
    }
    //Lambda Functions
    sort(A.begin(),A.end(), [&](vi &a, vi &b){
        return a[1] < b[1];
    });
    /*
        input:
        3
        10 20 
        12 15
        20 30
    */
    /*
    After Sorting vector becomes
    12 15
    10 20
    20 30
    */
    int take = 1;
    int end = A[0][1];//30
    rep( i, 1, n ) {
    
        if(A[i][0] >= end){
            take++;
            end = A[i][1];//20
            cout << A[i][0] << " ";
        }

    }

    cout << take << endl;
    return 0;
}