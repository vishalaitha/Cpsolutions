/*I_Am_A_Noob*/

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
    // int n;
    // cin>>n;
    vector<pair<int,int>>v;
    int mx=INT_MIN;
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
        mx=max(mx,x+y);
    }
    
    cout<<mx<<endl;
// cout<<endl;
}

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