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
    mii mp;
    // cout<<"n is "<<4*n<<endl;
    for(int i=0;i<4*n;i++){
    	cin>>temp;
    	v.pb(temp);
    	mp[temp]++;
    }
    // for(auto it:mp){
    // 	cout<<it.first<<" "<<it.second<<endl;
    // }
    for(auto it:mp)
    	if(it.second%2==1){
    		cout<<"NO"<<endl;
    		// cout<<"ENtered here"<<endl;
    		// cout<<it.first<<" "<<it.second<<endl;
    		return;
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=4*n-1;
    bool istrue=1;
    int areashouldbe=v[0]*v[4*n-1];
    while(i<j){

    	if(v[i]*v[j]!=areashouldbe){
    		istrue=0;
    		break;
    	}

    	i+=2;
    	j-=2;
    }
    if(istrue){
    	cout<<"YES"<<endl;
    }
    else
    	cout<<"NO"<<endl;
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