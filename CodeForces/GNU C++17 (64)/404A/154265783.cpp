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
// int ans,temp,sum;
using namespace std;

void solve(){
    int n;
    cin>>n;
    char a;
    char v[500][500];
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>a;
    		v[i][j]=a;
    		// cout<<v[i][j]<<" ";
    	}
    	// cout<<endl;
    }
    // cout<<endl;
    char ans=v[0][0];
    char b=v[0][1];
    // cout<<ans<<endl;
    // cout<<b<<endl;
    if(ans==b){
    	cout<<"NO"<<endl;
    	return;
    }
    bool isfailed=1;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(i==j){
    			// cout<<i<<" "<<j<<endl;
    			if(v[i][j]!=ans)
    				isfailed=0;
    		}
    		else if(i+j==n-1){
    			// cout<<"entered "<<i<<" "<<j<<endl;
    			if(i>j){
    				if(v[i][j]!=ans){
    					isfailed=0;
    				}
    			}
    			else if(j>i){
    				if(v[i][j]!=ans){
    				isfailed=0;
    				}
    			}
    		}
    		else if(v[i][j]!=b){
    			isfailed=0;
    		}
    	}
    }
    if(isfailed)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
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