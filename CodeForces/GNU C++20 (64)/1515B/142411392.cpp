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
vi v;
bool issquare(int x){
    int y=sqrt(x);
    return x==y*y;
}
void solve(){
    int n;
    cin>>n;
    // bool found=0;
    
    if(n%2==0&&issquare(n/2)){
        cout<<"YES"<<endl;
    }
    else if(n%4==0&&issquare(n/4))
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;
    // else if()
// cout<<endl;
}
int32_t main()
{
    _z;
    int n=30;
    for(int i=1;i<=1000000;i++){
        v.pb(pow(i,2));
    }
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}