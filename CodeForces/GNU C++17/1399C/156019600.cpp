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
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;
void _print(long long t) {cout << t;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
   	int maxi1=INT_MIN,maxi2=INT_MIN;
   	for(int i=0;i<n;i++){
   		if(v[i]>maxi1){
   			maxi2=maxi1;
   			maxi1=v[i];
   		}
   		else if(v[i]>maxi2){
   			maxi2=v[i];
   		}
   	}
   	// cout<<maxi1<<" "<<maxi2<<endl;
    // brut forcing this is choosing all possible n's
    int maxi=0;
    for(int i=2;i<=maxi1+maxi2;i++){
    // here u can take a map and apply 2 pointers
    // 1 2 3 4 5 6 9 9 9 9 10
    // can we use 2 pointers? or should we use map?
    // let's go with map this time around
    	mpii mp;
    	int ans=0;
    	for(int j=0;j<n;j++){
    		mp[v[j]]++;
    	}
    	// cout<<"i is "<<i<<endl;
    	for(auto &it:mp){
    		auto nwit=mp.find(i-it.first);
    		if(nwit!=mp.end()){
    			if(it.first==nwit->first){
    				// cout<<"Entered"<<endl;
    				// cout<<it.second<<endl;
    				// cout<<"ans "<<ans<<endl;
    				ans+=it.second/2;
    				if(it.second%2==1)
    					it.second=1;
    				else
    					it.second=0;
    				// cout<<it.second<<endl;
    				// cout<<"ans here "<<ans<<endl;
    				// cout<<endl;
    			}
    			else if(nwit->second>0&&it.second>0&&nwit->first+it.first==i){
    				// cout<<nwit->first<<" "<<it.first<<endl;
    				ans+=min(nwit->second,it.second);
    				int temp=min(nwit->second,it.second);
    				nwit->second-=temp;
    				it.second-=temp;
    			}
    		}
    	}
    	maxi=max(maxi,ans);
    }
    cout<<maxi<<endl;
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