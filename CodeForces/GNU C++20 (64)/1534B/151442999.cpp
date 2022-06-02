/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
/*---------------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
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
    v.pb(0);
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
    }
    v.pb(0);
    int initial_ugliness=0;
    for(int i=0;i<=n;i++){
        initial_ugliness+=abs(v[i]-v[i+1]);
    }
    // cout<<initial_ugliness<<endl;
    int score=0;
    for(int i=1;i<=n;i++){
        if(v[i]>v[i-1]&&v[i]>v[i+1]){
            temp=max(v[i-1],v[i+1]);
            score+=v[i]-max(v[i-1],v[i+1]);
            v[i]=temp;

        }
    }
    int finalugliness=0;
    for(int i=0;i<=n;i++){
        finalugliness+=abs(v[i]-v[i+1]);
    }
    // for(int i=0;i<=n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // finalugliness=
    // cout<<finalugliness<<endl;
    // cout<<score<<endl;
    cout<<min(initial_ugliness,score+finalugliness)<<endl;
// cout<<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
    fastio();
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}