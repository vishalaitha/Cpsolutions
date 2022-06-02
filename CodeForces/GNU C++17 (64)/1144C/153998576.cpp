/*---------------------------------------------------------------------------------------------------------------------------*/
//Author:I_Am_A_Noob
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
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define si set<int>
#define mpii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;

void solve(){
    int n;
    cin>>n;
    vi v(n),v1,v2;
    mpii mp;
    for(int i=0;i<n;i++){cin>>v[i],mp[v[i]]++;}
    for(auto it:mp){if(it.second>2){cout<<"NO"<<endl;return;}}
    sort(v.begin(),v.end());
	int prev=-1;
	for(int i=0;i<n;i++){
		if(v[i]==prev){
			v1.pb(v[i]);
		}
		else{
			v2.pb(v[i]);
		}
		prev=v[i];
	}
	sort(v2.rbegin(),v2.rend());
	cout<<"YES"<<endl;
	cout<<v1.size()<<endl;
	for(auto it:v1) cout<<it<<" ";
	cout<<endl;
	cout<<v2.size()<<endl;
	for(auto it:v2) cout<<it<<" ";
cout<<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}