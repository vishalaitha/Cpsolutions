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
    string s;
    cin>>s;
    int n=s.length();
    bool check1=1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'||s[i]=='4')
            continue;
        else{
            check1=0;
            break;
        }
    }
    bool check2=1;
    // first check for all elements except last 3
    for(int i=0;i<n-3;i++){
        if(s[i]=='4'&&s[i+1]=='4'&&s[i+2]=='4'){
            check2=0;
            break;
        }
    }
    bool check3=1;
    if(s[n-3]=='4'&&s[n-2]=='4'&&s[n-1]=='4'){
        check3=0;
    }
    if(check1&&check2&&check3&&s[0]=='1')
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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