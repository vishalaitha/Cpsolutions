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
int mex(vector<int>v){
    if(v[0]!=0)
        return 0;
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]!=1)
            return v[i-1]+1;
    }
    return *max_element(v.begin(),v.end())+1;
    // return -1;
}
void solve(){
    int n,k;
    cin>>n>>k;
    si s;
    vi v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
        s.insert(temp);
    }
    sort(v.begin(),v.end());
    if(mex(v)==s.size()){
        cout<<s.size()+k<<endl;
        return;
    }
    int x=s.size();
    int f=min(x,k);
    while(f--){
    int to_add=((mex(v)+*max_element(v.begin(),v.end()))+1)/2;
    // cout<<to_add<<endl;
    v.pb(to_add);
        if(s.find(to_add)!=s.end()){
        cout<<s.size()<<endl;
            // for(auto it:s)
                // cout<<it<<" ";
            // cout<<endl;
        return;
    }
    else
    s.insert(to_add);
    }
    cout<<s.size()<<endl;
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