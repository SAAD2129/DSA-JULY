#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;

void Negate(queue<int> q,vector<long long> &ans){
       while (!q.empty()){
              
              if(q.front() < 0){
                     ans.push_back(q.front());
                     return;
              }
              q.pop();
       }
       ans.push_back(0);
}
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {

       vector<long long>ans;
       queue<int> q;
       for (int i = 0; i < K; i++){
              q.push(A[i]);
       }
       
       
       for(int i=K; i<N+1; ++i){

              Negate(q,ans);
              q.pop();
              q.push(A[i]);
              cout<<A[i];

       }
       return ans;

}
int main(){

       long long N=5;
       long long A[]={-8, 2, 3, -6, 10};
       long long K=2;
       //Output
       // -8 0 -6 -6
       vector<long long> vec=printFirstNegativeInteger(A,N,K);
       cout<<endl;
       for(auto i: vec){
              cout<<i<<" ";
       }
       return 0;
}