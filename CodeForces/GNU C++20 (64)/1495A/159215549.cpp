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
bool customsort(){

return 1;   
}
void solve(){
    int n;
    cin>>n;
    vpii miners,positions;
    for(int i=0;i<2*n;i++){
    	int a,b,c,d;
    	cin>>a>>b;
        if(a==0)
    	miners.pb({abs(a),abs(b)});
        else
        positions.pb({abs(a),abs(b)});
    }
    sort(miners.begin(),miners.end());
    sort(positions.begin(),positions.end());
    double ans=0;
    for(int i=0;i<n;i++){
    	int a=miners[i].first; 
    	int b=miners[i].second;
    	int c=positions[i].first;
    	int d=positions[i].second;
    	ans+=sqrt((abs(c-a)*abs(c-a))+(abs(d-b)*abs(d-b)));
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
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