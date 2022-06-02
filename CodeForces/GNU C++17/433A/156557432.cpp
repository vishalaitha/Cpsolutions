/*---------------------------------------------------------------------------------------------------------------------------*/
// Author : I_Am_A_Noob
/*---------------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
/*---------------------------------------------------------------------------------------------------------------------------*/
//constants and typedefs
#define int long long int
#define MOD 1000000007
#define epsilon = 0.0000001f
#define PI 3.141592653589793238462
/*---------------------------------------------------------------------------------------------------------------------------*/
//operations on containers
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
/*---------------------------------------------------------------------------------------------------------------------------*/
//general operations
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << #x << ": " << x << endl
/*---------------------------------------------------------------------------------------------------------------------------*/
//templates
//template <class T> void _print(vector <T> v);
//template <class T> void _print(set <T> v);
/*---------------------------------------------------------------------------------------------------------------------------*/
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define si set<int>
#define mpii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;
void _print(long long t) {cout << t;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void solve(){
    int n;
    cin>>n;
    vi v(n); for(int i=0;i<n;i++) cin>>v[i];
    int sum=accumulate(v.begin(),v.end(),0ll);
    int hundred=count(v.begin(),v.end(),100);
    int twohundred=count(v.begin(),v.end(),200);
    int share=sum/2;
    int one=0;
    while(twohundred){
        if(one>=share)
            break;
            one+=200;
        twohundred--;
    }
    if(one>share){
        one-=200;
        twohundred++;
        if(hundred){
            one+=100;
            hundred--;
        }
    }
    else if(one<share){
        int req=share-one;
        if(req%100==0){
            one+=req;
            hundred-=req/100;
        }
    }
    int rem=twohundred*200+100*hundred;
    if(one==share&&rem==share){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
cout<<endl;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r" --------------------------------------------
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w" ----------------------------------------
#endif
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------*/