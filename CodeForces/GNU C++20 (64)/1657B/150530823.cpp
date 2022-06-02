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

void solve(){
    int n,b,x,y;
    cin>>n>>b>>x>>y;
    vector<int>v(n+1,0);
    // v.pb(0);
    for(int i=1;i<=n;i++){
        int fir=v[i-1]+x;
        int sec=v[i-1]-y;
        if((max(fir,sec))<=b)   
            v[i]=max(fir,sec);
        else
            v[i]=min(fir,sec);
    }
    // cout<<accumulate(v.begin(),v.end())<<endl;
    int sum=0;
    for(auto it:v)
        sum+=it;
    cout<<sum<<endl;
// cout<<endl;
}

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