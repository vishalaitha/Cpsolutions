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
    string s;
    cin>>s;
    int k;
    cin>>k;
    set<char>st;
    for(int i=0;i<k;i++){
    	char temp;
    	cin>>temp; st.insert(temp);
    }
    int lastindex=0;
    for(int i=n-1;i>=0;i--){
    	if(st.count(s[i])){
    		lastindex=i;
    		break;
    	}
    }
    // we can delete only till last index
    // a b o b e i h
    // 1+1+1+1+1
    // ct++
    // we have to find out contribution of each and every element 
    // cout<<endl;
    // for(auto it:st)
    // 	cout<<it<<" ";
    // cout<<endl;
    vi contribution(n);
    // we have to output the maximum contribution here
    int prevcontribute=0;
    for(int i=0;i<lastindex+1;i++){
    	if(st.count(s[i])){
    		contribution[i]=(i)-(prevcontribute);
    		prevcontribute=i;
    	}
    }
    // cout<<endl;
    // for(auto it:contribution){
    // 	cout<<it<<" ";
    // }
    cout<<endl;
    int firstround=0;
    for(int i=0;i<lastindex;i++){
    	if(st.count(s[i+1])){
    		firstround++;
    	}
    }
    cout<<*max_element(contribution.begin(),contribution.end());
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
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
