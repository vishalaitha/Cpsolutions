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
    int n,m;
    cin>>n>>m;
    vi initialsizes;
    vi finalsizes;
    int totalbefore=0;
    int totalafter=0;
    for(int i=0;i<2*n;i++){
        cin>>temp;
        if(i%2==0){
        initialsizes.pb(temp);
        totalbefore+=temp;
        }
        else{
        finalsizes.pb(temp);
        totalafter+=temp;
        }
    }
    // cout<<totalbefore<<" "<<totalafter<<" "<<m<<endl;
    if(totalafter>m){
        cout<<"-1"<<endl;
        return;
    }
    if(totalbefore<=m){
        // cerr<<"hi"<<endl;
        cout<<"0"<<endl;
        return;
    }
    vi differences;
    for(int i=0;i<n;i++){
        differences.pb(initialsizes[i]-finalsizes[i]);
    }
    sort(differences.begin(),differences.end(),greater<int>());
    int initial=differences[0];
    // for(int i=0;i<differences.size();i++){
    //     cout<<differences[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<differences.size();i++){
        int temp=differences[i];
        differences[i]+=initial;
        initial+=temp;
    }
    // for(int i=0;i<differences.size();i++){
    //     cout<<differences[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(totalbefore-differences[i]<=m){
            cout<<i+1<<endl;
            return;
        }
    }
    //cout<<"lol just for debugging :)"<<endl;
// cout<<endl;
}

int32_t main()
{
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}