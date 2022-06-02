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
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    int initialn=n;
    int temn=n;
    // for minimum number of players
    temn-=(k1-1)*a1+(k2-1)*a2;
    if(temn<=0){
    	cout<<"0 ";
    }
    else{
    	cout<<temn<<" ";
    }
    //for maximum number of players
    if(k1>=k2){
    	if(n<k2){
    		cout<<"0"<<endl;
    	}
    	else{
    		int ans=0;
    		ans+=(min(a2,n/k2));
    		n-=ans*k2;
    			if(n>=k1){
    				ans+=n/k1;
    		}
    		cout<<ans<<endl;
    	}
    }
    else{
    	if(n<k1){
    		cout<<"0"<<endl;
    	}
    	else{
    		int ans=0;
    		ans+=min(a1,n/k1);
    		n-=ans*(k1);
    		if(n>=k2){
    			ans+=n/k2;
    		}
    	cout<<ans<<endl;
    	}
    }
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