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
#define rep(i,a,b) for(int i=a;i<n;i++)
const int N = 1e6+3;
const int MOD = 1e9 + 7;

/*
    ***    Saad a Peaceful soul 7 Star ==> Zindagi me maza Aana Chahye Bs  ***  
*/

using namespace std;

// int countDaysTogether(string aA, string lA, string aB, string lB) {

//     int m1 = stoi( aA.substr(0,2));
//     int m2 = stoi( aB.substr(0,2));
//     if(m1 == m2){

//         int d1 = 
//     }
//     cout << m1;
// }


int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

    int ans = 0;
    int n = players.size();
    int idx = 0;
    sort(players.begin(),players.end());
    sort(trainers.begin(),trainers.end());
    for (int i = 0; i < n; i++)
    {
    
        
        if(idx >= trainers.size())
            return ans;
        while (idx < trainers.size())
        {
            if(players[i] <= trainers[idx]){
                cout << "Matches " << players[i] << " " << trainers[idx] << endl;
                ans++;
                idx++;
            }
        }
        
        
    }
    
    // 8,8 5 2 
    return ans; 
}
int main(){

    // string arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19";
    // countDaysTogether(arriveAlice,leaveAlice,arriveBob,leaveBob);
    vi players = {4,7,9}, trainers = {8,2,5,8};
    // 1 1000000 1 100000
    cout << matchPlayersAndTrainers(players,trainers) << endl;
    /*
    [4,7,9]
[8,2,5,8]
[1,1,1]
[10]
    */

    return 0;
}