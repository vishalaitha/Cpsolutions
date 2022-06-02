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
    int a=1e18,b=1e18,c=1e18,ab=1e18,ac=1e18,bc=1e18,abc=1e18;
    int ans=1e18;
    bool aispresent=0,bispresent=0,cispresent=0;
    for(int i=0;i<n;i++){
    	int temp;
    	string s;
    	cin>>temp>>s;
    	sort(s.begin(),s.end());
    	if(s=="A"||s=="B"||s=="C"){
    		if(s=="A"){
    			a=min(a,temp);
    			aispresent=1;
    		}
    		else if(s=="B"){
    			b=min(b,temp);
    			bispresent=1;
    		}
    		else{
    			c=min(c,temp);
    			cispresent=1;
    		}	
    	}
    	else if(s=="AB"||s=="BC"||s=="AC"){
    		if(s=="AB"){
    			ab=min(ab,temp);
    			aispresent=1;
    			bispresent=1;
    		}
    		else if(s=="BC"){
    			bc=min(bc,temp);
    			bispresent=1;
    			cispresent=1;
    		}
    		else{
    			ac=min(ac,temp);
    			aispresent=1;
    			cispresent=1;
    		}
    	}
    	else{
    		abc=min(abc,temp);
    		aispresent=1;
    		bispresent=1;
    		cispresent=1;
    	}
    }
    if(aispresent==0||bispresent==0||cispresent==0){
    	cout<<"-1"<<endl;
    }
    else{
    	cout<<min({abc,a+b+c,ab+bc,ab+c,ac+b,ab+ac,ac+bc,bc+a})<<endl;
    }
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