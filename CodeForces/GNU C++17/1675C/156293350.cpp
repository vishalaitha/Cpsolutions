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
    // 11??00
    string s;
    cin>>s;
    int n=s.length();
    if(n==1){
    	cout<<1<<endl;
    	return;
    }
    int lastpointer=INT_MAX;
    for(int i=0;i<n;i++){
    	if(s[i]=='0'){
    		lastpointer=i;
    		break;
    	}
    }
    int firstonebeforezero=-1;
    for(int i=0;i<min(lastpointer,n);i++){
    	if(s[i]=='1'){
    		firstonebeforezero=i;
    	}	
    }
    int ques=0;
    for(int i=max(firstonebeforezero,0ll);i<min(lastpointer,n);i++){
    	if(s[i]=='?')
    		ques++;

    }
    if(firstonebeforezero==-1&&lastpointer==INT_MAX){
    	cout<<n<<endl;
    	return;
    }
    if(firstonebeforezero==-1){
    	cout<<ques+1<<endl;
    	return;
    }
    if(lastpointer==0){
    	cout<<1<<endl;
    	return;
    }
    if(lastpointer==INT_MAX){
    	cout<<ques+1<<endl;
    }
    else{
    	cout<<lastpointer-firstonebeforezero+1<<endl;    	
    }
    // cout<<firstonebeforezero<<" "<<lastpointer<<endl;
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
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------*/