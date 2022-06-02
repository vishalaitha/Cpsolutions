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
    int n;
    cin>>n;
    vi v;
    int sumateven=0;
    int sumatodd=0;
    int maxelinoddpos=INT_MIN;
    int minelinevenpos=INT_MAX;
    int indexofminevenenpos=0;
    int indexofmaxelinodpos=1;
    for(int i=0;i<n;i++){        
        cin>>temp;
            temp=abs(temp);
        v.pb(abs(temp));
        if(i%2==0){
            sumateven+=temp;
            if(temp<minelinevenpos){
                minelinevenpos=temp;
                indexofminevenenpos=i;
            }
        }
        else{
            sumatodd+=temp;
            if(temp>maxelinoddpos){
                maxelinoddpos=temp;
                indexofmaxelinodpos=i;
            }
        }
    }
    int sum1=0;
    int sum2=0;
    swap(v[indexofmaxelinodpos],v[indexofminevenenpos]);
    for(int i=0;i<n;i+=2){
        sum1+=v[i];
    }
    for(int i=1;i<n;i+=2){
        sum2+=v[i];
    }
    // cout<<sumateven<<endl;
    // cout<<sumatodd<<endl;
    // cout<<sumateven-sumatodd<<endl;
    cout<<max(sumateven-sumatodd,sum1-sum2)<<endl;
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