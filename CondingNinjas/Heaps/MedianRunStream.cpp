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
    Saad a Peaceful soul 
*/

using namespace std;

priority_queue<int, vi, greater<int>> mini;
priority_queue<int, vi> maxi;

void insert(int key){

    if(maxi.size() == mini.size()){
        
        if(maxi.size() == 0){
            maxi.push(key);
            return;
        }
        if(maxi.top() > key){
            maxi.push(key);
        }
        else {
            mini.push(key);
        }

    }
    else{
        if(maxi.size() < mini.size()){
            if(key <= mini.top()){
                maxi.push(key);
            }
            else{
                int temp = mini.top();
                mini.pop();
                maxi.push(temp);
                mini.push(key);
            }
        }
        else if(maxi.size() > mini.size()){
            
            if(key >= maxi.top()){
                mini.push(key);
            }
            else{
                int temp = maxi.top();
                maxi.pop();
                mini.push(temp);
                maxi.push(key);
            }
        }
    }
}

double MedianOfStream(){

    if(maxi.size() == mini.size())
        return (maxi.top() + mini.top())/2.0;
    else if(maxi.size() > mini.size()){
        return maxi.top();
    }
    return mini.top();

}
//

int main(){

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        insert(n);

        cout << MedianOfStream() << endl;    
    }
    

    return 0;
}