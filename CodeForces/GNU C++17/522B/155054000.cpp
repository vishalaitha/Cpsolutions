/*---------------------------------------------------------------------------------------------------------------------------*/
// Author : I_Am_A_Noob
/*---------------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
/*---------------------------------------------------------------------------------------------------------------------------*/
//constants and typedefs
#define int long long int
#define MOD 10000000017
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
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;
void _print(long long t) {cout << t;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void solve(){
    int n;
    cin>>n;
    vpii v(n);
    int f=0;
    int s=0;
    int maxf=INT_MIN;
    int max2f=INT_MIN;
    for(int i=0;i<n;i++){
    	cin>>v[i].ff>>v[i].ss;
    	f+=v[i].ff;
    	s+=v[i].ss;
    	if(v[i].ss>maxf){
    		max2f=maxf;
    		maxf=v[i].ss;
    	}
    	else if(v[i].ss>max2f){
    		max2f=v[i].ss;
    	}
    }
    // cout<<maxf<<" "<<max2f<<endl;
    vpii duplicate=v;
    for(int i=0;i<n;i++){
    	int prod;
    	if(v[i].ss==maxf){
    		prod=max2f;
    	}
    	else
    		prod=maxf;
    	// cout<<f-v[i].ss<<" "<<prod<<endl;
    	cout<<(f-v[i].ff)*(prod)<<" ";
    }
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