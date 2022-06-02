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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mcharfreq=count(s.begin(),s.end(),'M');
    int tcharfreq=count(s.begin(),s.end(),'T');
    if(2*mcharfreq!=tcharfreq){
        cout<<"NO"<<endl;
        return;
    }
    //TTT  M  TMTM
    //TTT  M  TMTTM
    //
    //
    int ftc=0;
    int fmc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            ftc++;
        }
        else
            fmc++;
        if(fmc>ftc){
            cout<<"NO"<<endl;
            return;
        }
    }
    int btc=0,bmc=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='T'){
            btc++;
        }
        else
            bmc++;
        if(bmc>btc){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    //TTTMMTMTT
    //0        N-1
    //temp=tmt
    //t m t==yes;
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
// /*---------------------------------------------------------------------------------------------------------------------------*/
// /*I_Am_A_Noob*/
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<iterator>
// #include <array>
// #include<vector>
// #include<set>
// #include<map>
// #include<unordered_map>
// #include<unordered_set>
// #include<list>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<math.h>
// #include<cmath>
// #include<bitset>
// #include<iomanip>
// #include<numeric>
// #include<climits>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define ll long long
// #define MOD 1000000007
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// //#define for(z,x,y) for(int i=z;i<x;i+=y)
// #define pb push_back
// #define eb emplace_back
// #define ppb pop_back
// #define endl "\n"
// #define int long long int
// #define all(x) (x).begin(), (x).end()
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define vi vector<int>
// #define vs vector<string>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define vpii vector<pair<int, int>>
// #define si set<int>
// #define mii map<int, int>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// bool revsort(ll a, ll b) {return a > b;}
// void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// /*---------------------------------------------------------------------------------------------------------------------------*/
// int ans,temp,sum;
// using namespace std;

// void solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vi t, m;
//     for(int i = 0; i < n; i++) {
//         if(s[i] == 'T')
//             t.push_back(i);
//         else
//             m.push_back(i);
//     }
//     for(int i = 0; i < m.size(); i++) {
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
//     for(int i = 0; i <t.size(); i++) {
//         cout<<t[i]<<" ";
//     }
//     cout<<endl;
//     if(t.size() != 2 * m.size())
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
//     for(int i = 0; i < m.size(); i++) {
//         if(m[i] < t[i] || m[i] > t[i + m.size()]) { cout<<"NO"<<endl; return;} 
//     }
//     cout<<"YES"<<endl;
// cout<<endl;
// }

// int32_t main()
// {
//     fastio();
//     int t=1;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }