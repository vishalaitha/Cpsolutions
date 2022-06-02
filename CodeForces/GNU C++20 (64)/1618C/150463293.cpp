// // //#include<bits/stdc++.h>
// // #include<iostream>
// // #include<string>
// // #include<algorithm>
// // #include<iterator>
// // #include<vector>
// // #include<set>
// // #include<map>
// // #include<unordered_map>
// // #include<list>
// // #include<stack>
// // #include<queue>
// // #include<math.h>
// // #include<bitset>
// // #include<iomanip>
// // #include<numeric>
// // #include<climits>
// // #define ll long long
// // #define MOD 1000000007
// // #define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
// // #define vi vector<int>
// // #define vll vector<long long>
// // #define vc vector<char>
// // //#define for(i,n) for(int i=0;i<n;i++)
// // #define pb push_back
// // #define endl "\n"
// // #define int long long int
// // int ans,temp,sum;
// // using namespace std;
// // void solve(){
// //     int n;
// //     cin>>n;
// //     vi v;
// //     vector<bool>vb;
// //     for(int i=0;i<n;i++){
// //         int temp;
// //         cin>>temp;
// //         v.pb(temp);
// //     }
// //     if(v.size()==1){
// //         cout<<v[0]<<endl;
// //         return;
// //     }
// //     else if(v.size()==2){
// //         if(v[0]==v[1])
// //             cout<<"0"<<endl;
// //         else if(v[0]>v[1])
// //             swap(v[0],v[1]);
// //         if(v[0]%v[1]==0)
// //             cout<<"0"<<endl;
// //     }
// //     int mini=1000000;
// //     for(int i=0;i<n;i+=2){
// //         if(v[i]<mini&&v[i]!=1)
// //             mini=v[i];
// //     }
// //     // for(int i=0;i<n;i++){
// //     //     if(v[i]%mini==0)
// //     //         vb.pb(1);
// //     //     else
// //     //         vb.pb(0);
// //     // }
// //     for(int i=1;i<n;i+=2){
// //         if(v[i]%mini==0){
// //             cout<<"0"<<endl;
// //             return;
// //         }
// //     }
// //     cout<<mini<<endl;
// // // cout<<endl;
// // }
// // int32_t main()
// // {
// //     _z;
// //     int t=1;
// //     cin>>t;
// //     while(t--){
// //     solve();
// //     }
// // return 0;
// // }
// //#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<iterator>
// #include<vector>
// #include<set>
// #include<map>
// #include<unordered_map>
// #include<list>
// #include<stack>
// #include<queue>
// #include<math.h>
// #include<bitset>
// #include<iomanip>
// #include<numeric>
// #include<climits>
// #define ll long long
// #define MOD 1000000007
// #define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
// #define vi vector<int>
// #define vll vector<long long>
// #define vc vector<char>
// //#define for(i,n) for(int i=0;i<n;i++)
// #define pb push_back
// #define endl "\n"
// #define int long long int
// int ans,temp,sum;
// using namespace std;
// void solve(){
//     int n;
//     cin>>n;
//     vi v;
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         v.pb(temp);
//     }
//     vi vforodd(n,0),vforeven(n,0);
//     vi vforall(n,0);
//     int smallestinodd=INT_MAX,smallestineven=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             if(v[i]<smallestineven)
//                 smallestineven=v[i];
//         }
//         else{
//             if(v[i]<smallestinodd)
//                 smallestinodd=v[i];
//         }
//     }
//     if((smallestinodd==smallestineven)||(smallestineven==1&&smallestinodd==1)){
//         cout<<"0"<<endl;
//         return;
//     }
//     if(smallestineven!=1){
//         for(int i=0;i<n;i++){
//             if(v[i]%smallestineven==0){
//                 vforodd[i]=1;
//             }
//             else{
//                 vforeven[i]=0;
//             }
//         }
//     }
//     else if(smallestinodd!=1){
//         for(int i=1;i<n;i++){
//             if(v[i]%smallestinodd==0){
//                 vforodd[i]=1;
//             }
//             else{
//                 vforodd[i]=0;
//             }
//     }
//     }

//     cout<<endl;
//     int alternateodd=1;
//     int alternateeven=1;
//     if(smallestinodd!=1){
//             cout<<"entered 177"<<endl;
//         for(int i=1;i<=n-1;i++){
//             if(vforodd[i]==vforodd[i-1]){
//                 alternateodd=0;
//                 cout<<"172 made 0"<<endl;
//                 // return;
//             }
//         }
//     }
//     else if(smallestineven!=1){
//         cout<<"entered 177"<<endl;
//         for(int i=1;i<n;i++){
//         if(vforeven[i]==vforeven[i-1]){
//             alternateeven=0;
//             // cout<<"0"<<endl;
//             // return;
//         }
//     }
//     cout<<"smallest in even is ";
//     for(int i=0;i<n;i++){
//         cout<<vforeven[i]<<" ";
//     }
//     cout<<endl<<"smalles in odd is ";
//     for(int i=0;i<n;i++){
//         cout<<vforodd[i]<<" ";
//     }
//     }
//     if(smallestinodd!=1&&alternateodd==1)
//         cout<<smallestinodd<<endl;
//     else if(smallestineven!=1&&alternateeven==1)
//         cout<<smallestineven<<endl;
//     else
//         cout<<"0"<<endl;
// }
// int32_t main()
// {
//     _z;
//     int t=1;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
/*---------------------------------------------------------------------------------------------------------------------------*/
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include <array>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<math.h>
#include<cmath>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
/*---------------------------------------------------------------------------------------------------------------------------*/
#define ll long long
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define for(z,x,y) for(int i=z;i<x;i+=y)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define endl "\n"
#define int long long int
#define all(x) (x).begin(), (x).end()
/*---------------------------------------------------------------------------------------------------------------------------*/
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define si set<int>
#define mii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;

// int findGCD(int arr[], int n)
// {
//     int result = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         result = gcd(arr[i], result);
 
//         if(result == 1)
//         {
//            return 1;
//         }
//     }
//     return result;
// }
void solve(){
    int n;
    cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
    }
    int gcdofodd=v[0];
    int gcdofeven=v[1];
    // if(gcd(gcdofeven,gcdofodd)!=1){
    //     // cout<<gcdofeven<<" "<<gcdofodd<<endl;
    //     cout<<"0"<<endl;
    //     return;
    // }
    for(int i=0;i<n;i+=2){
        gcdofodd=gcd(gcdofodd,v[i]);
    }
    for(int i=1;i<n;i+=2){
        gcdofeven=gcd(gcdofeven,v[i]);
    }
    bool checker1=1,checker2=1;
    for(int i=1;i<n;i+=2){
        if(v[i]%gcdofodd==0){
            checker1=0;
            // return;
        }
    }
    for(int i=0;i<n;i+=2){
        if(v[i]%gcdofeven==0){
            checker2=0;
            // return;
        }
    }
    if(checker1)
        cout<<gcdofodd<<endl;
    else if(checker2)
        cout<<gcdofeven<<endl;
    else
        cout<<"0"<<endl;
    // if(checker1||checker2)
    // {
    // if(gcdofodd==1)
    //     cout<<gcdofeven<<endl;
    // else
    //     cout<<gcdofodd<<endl;
    // }
    // cout<<"0"<<endl;
}
// cout<<endl;

int32_t main()
{
    fastio();
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}