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
    int len,period;
    cin>>len>>period;
    bool var=1;
    string s;
    cin>>s;
    // cout<<s<<endl;
    int n=s.length();
    for(int i=0;i<n-period;i++){
    	if(s[i]=='.'&&s[i+period]=='1'){
    		s[i]='0';
    	}
    	else if(s[i]=='.'&&s[i+period]=='0'){
    		s[i]='1';
    	}
    	else if(s[i]=='1'&&s[i+period]=='.'){
    		s[i+period]='0';
    	}
    	else if(s[i]=='0'&&s[i+period]=='.'){
    		s[i+period]='1';
    	}
    	else if(s[i]=='.'&&s[i+period]=='.'){
    		s[i]='0';
    		// s[i+1]='1';
    	}
    }

    // cout<<s<<endl;
    bool pos=0;
    for(int i=0;i<n-period;i++){
    	if(s[i]!=s[i+period]){
    		pos=1;
    	}
    }
    if(!pos){
    	cout<<"NO";
    	return;
    }
    else{
    for(int i=0;i<s.length();i++){
    	if(s[i]=='.')
    		s[i]='1';
    	cout<<s[i];
	}
    // cout<<s<<endl;

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