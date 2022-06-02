//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
#define ll long long
#define MOD 1000000007
#define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
//#define for(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long int
int ans,temp,sum;
using namespace std;
void solve(){
    int n;
    cin>>n;
    vi v;
    vi z;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
        z.pb(temp);
    }
    sort(z.begin(),z.end());
    for(int i=0;i<n;i++){
        if(v[i]!=z[1]){
            cout<<i+1<<endl;
            break;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(i==0){
    //         if(v[i]!=v[i+1]){
    //             if(v[i+1]==v[i+2]){
    //                 cout<<i+1<<endl;
    //             }
    //             else{
    //                 cout<<i+1+1<<endl;
    //             }
    //         }
    //         else if(i==n-1){
    //             if(v[i]!=v[i-1]){
    //                 if(v[i-1]==v[i-2]){
    //                     cout<<i+1<<endl;
    //                 }
    //                 else{
    //                     cout<<i-1+1<<endl;
    //                 }
    //             }
    //         }
    //         else{
    //             cout<<"hi"<<endl;
    //             if((v[i]!=v[i+1])){
    //                 cout<<i<<endl;
    //                 cout<<"hi"<<endl;
    //             }
    //             else if(v[i]!=v[i-1]){
    //                 cout<<"line 66"<<endl;
    //                 cout<<i+1<<endl;
    //             }
    //         }
    //     }
    }
// cout<<endl;
int32_t main()
{
    _z;
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}