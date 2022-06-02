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
int willitbeapallindrome(string s,char x,int n){
	int erased=0;
	bool formed=1;
	// int n=s.length()-1;
	int i=0,j=s.length()-1;
	string strtemp;
	while(i<=j){
		if(s[i]==s[j]){
			i++;
			j--;
			strtemp+=s[i];
		}
		else if(s[i]==x){
			i++;
			erased++;
		}
		else if(s[j]==x){
			j--;
			erased++;
		}
		else{
			formed=0;
			break;
		}
	}
	if(formed){
		return erased++;
	}
	else
		return -1;
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    // int mini=INT_MAX;
    vi v;
    for(int i=0;i<26;i++){
    	int formed=willitbeapallindrome(s,char('a'+i),n);
    	if(formed==-1){
    		continue;
    	}
    	v.pb(formed);
    }
    // for(auto it:v){
    // 	cout<<it<<" ";
    // }
    // cout<<endl;
    if(!v.size())
    	cout<<"-1"<<endl;
    else
    	cout<<*min_element(v.begin(),v.end())<<endl;
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