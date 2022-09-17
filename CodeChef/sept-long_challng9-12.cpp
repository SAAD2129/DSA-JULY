// #include<bits/stdc++.h>

// /*
//        *** Saad a Peaceful Soul ***
// */
// using namespace std;

// const int N = 1e7+10;
// int Divisors[N];

// bool isPrime(int n){

//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if(n%i == 0)
//             return false;
//     }
//     return true;
// }
// int main(){

//     cout <<"is Prime " << isPrime(11);
//     map<int,vector<int>> Divs;
//     for (int i = 1; i < N; i++)
//     {

//         vector <int> temp;
//        for (int j = 1; j <=i; j++)
//        {
//             temp.push_back(j);
//        }
//        Divs[i] = temp;
        
//     }
//     for(auto i : Divs){
//         cout << i.first << " ";
//         for(auto j : i.second){
//             cout <<  j << " ";
//         } cout <<endl;
//     }
    
//     // int t;
//     // cin >> t;
//     // while(t--){
//     //     int N,K;
//     //     cin >> N >> K;
//     //     int mainsum = 0;
//     //     set<int> st;
        
//     //     for (int i = 0; i < K; i++)
//     //     {
//     //         int divisor = 1;
//     //         int sum = 0;
//     //         while (divisor <= N) //2 
//     //         {
                
//     //             if(N%divisor == 0){
//     //                 sum = divisor*N;
//     //                 // cout << divisor << " ";
//     //             }
//     //             st.insert(sum);
//     //             divisor++;
//     //         }
//     //         N = sum;

//     //     }
//     //     int mod = 1e9+7;
//     //     for(auto i : st){
//     //         mainsum+=i%mod;
//     //     }
//     //     cout << mainsum << endl;
//     // }

//     return 0;
// }
// // #include <bits/stdc++.h>

// // /*
// //  *** Saad a Peaceful Soul ***
// //  */
// // using namespace std;

// // // 1500000  1500005
// // //    1500005

// // int countZeros(int n){

// //     int res = 0;
// //     for (int i = 5; i <=n; i*=5)
// //     {
// //         res = res + n/i;
// //     }
// //     return res;
// // }
// // int main()
// // {

// //     int a, b;
// //     cin >> a >> b;
// //     a = a + 5;
// //     int sum = 0;
// //     int mod = 1e9 + 7;
// //     if(b-a <= 4){
// //         a += b-a;
// //     }
// //     cout << countZeros(30) << endl;
// //     // for (int i = a; i <= b; i += 5)
// //     // {
// //     //     sum = (sum %mod + %mod) %mod;
// //     // }
// //     // cout << sum << endl;
// //     return 0;
// // }
// // // #include <bits/stdc++.h>

// // // /*
// // //  *** Saad a Peaceful Soul ***
// // //  */
// // // using namespace std;
// // // long long gcd(long long int a, long long int b)
// // // {
// // //     if (b == 0)
// // //         return a;
// // //     return gcd(b, a % b);
// // // }

// // // // Function to return LCM of two numbers
// // // long long lcm(int a, int b)
// // // {
// // //     return (a / gcd(a, b)) * b;
// // // }
// // // int main()
// // // {

// // //     int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {

// // //         int n;
// // //         cin >> n;
// // //         int *A = new int[n];
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             cin >> A[i];
// // //         }
// // //         vector<vector<int>> pairs;
// // //         for (int i = 0; i < n; ++i)
// // //         {
// // //             vector<int> temp;
// // //             for (int j = i; j < n; j++)
// // //             {
// // //                 temp.push_back(A[j]);
// // //             }
// // //             pairs.push_back(temp);
// // //         }

// // //         int ct = 0;
// // //         int minAns = INT_MAX;
// // //         int maxAns = INT_MIN;

// // //         for(auto i : pairs){

// // //             int mini = INT_MAX;
// // //             int maxi = INT_MIN;

// // //             for(auto j : i){

// // //                 mini = min(j,mini);
// // //                 maxi = max(j,maxi);
// // //                 cout << j << " ";
// // //             }
// // //             cout << mini << " " << maxi << endl;
// // //             // minAns = min(minAns,mini*maxi);
// // //             // maxAns = max(maxAns,mini*maxi);

// // //             cout << endl;
// // //         }
// // //         // cout << minAns <<" " << maxAns << endl;
// // //         cout << ct << endl;
// // //     }

// // //     return 0;
// // // }
// // // #include<bits/stdc++.h>

// // // /*
// // //        *** Saad a Peaceful Soul ***
// // // */
// // // using namespace std;

// // // int main(){

// // //     int t;
// // //     cin >> t;
// // //     while(t--){

// // //         double a,b,x,y;
// // //         cin >>a>>x >>b >> y;
// // //         x = x/3600;
// // //         y = y/3600;
// // //         a = a*1000;
// // //         b = b*1000;
// // //         double alice = a/x;
// // //         double bob = b/y;

// // //         if(alice > bob){
// // //             cout << "ALICE" <<endl;
// // //         }
// // //         else if(alice == bob){
// // //             cout <<"EQUAL" << endl;
// // //         }
// // //         else{
// // //             cout << "BOB" << endl;
// // //         }
// // //     }

// // //     return 0;
// // // }
// // // #include<bits/stdc++.h>

// // // /*
// // //        *** Saad a Peaceful Soul ***
// // // */
// // // using namespace std;

// // // int main(){

// // //     int t;
// // //     cin >> t;
// // //     while(t--){

// // //         int w,x,y,z;
// // //         cin >> w>>x>>y>>z;

// // //         int money = 0;
// // //         for (int i = 0; i < z; i++)
// // //         {
// // //             w+=x;
// // //         }
// // //         cout << w-(y*z) <<endl;
// // //     }

// // //     return 0;
// // // }
// // // #include<bits/stdc++.h>

// // // /*
// // //        *** Saad a Peaceful Soul ***
// // // */
// // // using namespace std;

// // // int main(){

// // //     int t;
// // //     cin >> t;
// // //     while(t--){

// // //         int n,m,x;
// // //         cin >> n>> m >> x;

// // //         int form =( 2*n + 2*m )*x;

// // //         cout << form << endl;

// // //     }

// // //     return 0;
// // // }

#include<bits/stdc++.h>

/*
       *** Saad a Peaceful Soul ***
*/
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
const int N = 1e5+10;
int main(){

    set<pair<int,int>> pairs;
        for(int i = 0; i < N; ++i){

            for (int j = i+1; j < N; j++)
            {
                pairs.insert({i,j});
            }
            
    }
    cout << "hello" << endl;
    // int t;
    // cin >> t; 
    // while(t--){

    //     int n;
    //     cin >>n;
    //     int * A = new int[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> A[i];
    //     }
        
    //     int ct = 0;

    //     for(auto i : pairs){

    //         int a = i.first;
    //         int b = i.second;
    //         if(gcd(A[a],A[b]) == lcm(A[a],A[b])){
    //             ct++;
    //         }
    //     }
    //     cout << ct << endl;
        
    // }

    return 0;
}