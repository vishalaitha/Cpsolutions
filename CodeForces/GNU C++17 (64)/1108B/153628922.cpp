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
    vi v;
    vi forfirst;
    vi forsecond;
    mpii mp;
    for(int i=0;i<n;i++){
    	cin>>temp;
    	v.pb(temp);
    	mp[temp]++;
    }
    int biggest=*max_element(v.begin(),v.end());
    for(auto it:mp){
    	if(it.second>1){
    		forfirst.pb(it.first);
    		forsecond.pb(it.first);
    	}
    	else if(biggest%it.first==0){
    		forfirst.pb(it.first);
    	}
    	else{
    		forsecond.pb(it.first);
    	}
    }
    // cout<<"Entered"<<endl;
    sort(all(forfirst));
    sort(all(forsecond));
    // for(auto it:forfirst)
    	// cout<<it<<" ";
    // cout<<endl;
    // for(auto it:forsecond)
    	// cout<<it<<" ";
    cout<<forfirst[forfirst.size()-1]<<" "<<forsecond[forsecond.size()-1];
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