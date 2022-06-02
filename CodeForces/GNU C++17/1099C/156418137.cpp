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
	string s; cin>>s;
    int n;
    cin>>n;
    int len=s.length();
    bool snowflake=count(s.begin(),s.end(),'*');
    int snflake=count(s.begin(),s.end(),'*');
    int candy=count(s.begin(),s.end(),'?');
    int toberemoved=(len-(snflake+candy))-n;
    if(toberemoved>0){
    	s+='$';
    	string ans1;
    	for(int i=0;i<=len;i++){
    		if((s[i+1]=='?'||s[i+1]=='*')&&toberemoved){
    			toberemoved--;
    			continue;
    		}
    		else{
    			ans1+=s[i];
    		}
    	}
    	string ans;
    	for(int i=0;i<ans1.length();i++){
    		if(ans1[i]!='?'&&ans1[i]!='$'&&ans1[i]!='*')
    			ans+=ans1[i];
    	}
    	if(ans.length()>n){
    		cout<<"Impossible"<<endl;
    		return;
    	}
    	cout<<ans<<endl;
    }
    else if(toberemoved<0){
    	if(snowflake){
    		int here=abs(toberemoved);
    		bool changed=0;
    		string curr;
    		for(int i=0;i<s.length();i++){
    			if(s[i]=='*'&&changed==0){
    					char tobe=s[i-1];
    				for(int i=0;i<here;i++){
    					curr+=tobe;
    				}
    				changed=1;
    			}
    			else{
    				curr+=s[i];
    			}
    		}
    		string final;
    		for(int i=0;i<curr.length();i++){
    			if(curr[i]!='?'&&curr[i]!='*'){
    				final+=curr[i];
    			}
    		}
    		cout<<final<<endl;
    	}
    	else{
    		cout<<"Impossible"<<endl;
    	}
    }
    else{
    	for(int i=0;i<len;i++){
    		if(s[i]!='?'&&s[i]!='*')
    			cout<<s[i];
    	}
    	cout<<endl;
    }
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