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
    vi v(n);
    si s;
    for(int i=0;i<n;i++) cin>>v[i],s.insert(v[i]);
    int finalans=0;
    int currones=0;
    int totalones=count(v.begin(),v.end(),1ll);
    int totaltwos=count(v.begin(),v.end(),2ll);
    // cout<<totalones<<endl;
    for(int i=0;i<n;i++){
    	if(v[i]==1){
    		finalans+=n-i-1;
    		totalones--;
    	}
    	else if(v[i]==2){
    		totaltwos--;
    		finalans+=totalones+totaltwos;
    	}
    	else{
    		finalans+=totalones;
    	}
    	// cout<<finalans<<endl;
    }
    cout<<finalans<<endl;
//     // rest+=countoftwos;
//     int ans=countofones*(n-1);
//     ans+=
//     // int ansbyone=countofones*rest+(((countofones-1)*(countofones))/2);
//     // int ansbytwos=countoftwos*countofones+(((countoftwos-1)*(countoftwos))/2);
//     cout<<((n-1)*(n))/2;
//     // cout<<"-->"<<ansbytwos+ansbyone<<endl;
//     // int ans=(countofones/2)+(rest)*countofones; // 2
//     // ans+=(countoftwos/2)+countoftwos*(countoftwos-1); // 
//     //pair ones with rest all numbers
//     //pair ones with all ones
//     // cout<<ans<<endl;
// // cout<<endl;
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