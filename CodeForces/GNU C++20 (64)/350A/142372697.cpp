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
    int n,m;
    cin>>n>>m;
    vi v1,v2;
    for(int i=0;i<n;i++){
        cin>>temp;
        v1.pb(temp);
    }for(int i=0;i<m;i++){
        cin>>temp;
        v2.pb(temp);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int tmin=max(2*v1[0],v1[n-1]);
    if(tmin>=v2[0]){
        cout<<"-1"<<endl;
    }
    else
        cout<<tmin<<endl;
// cout<<endl;
}
int32_t main()
{
    _z;
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}