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
    int h,w;
    cin>>h>>w;
    vi v1,v2,v3,v4;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
    	cin>>temp;
    	v1.pb(temp);
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
    	cin>>temp;
    	v2.pb(temp);
    }
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
    	cin>>temp;
    	v3.pb(temp);
    }
    int d;
    cin>>d;
    for(int i=0;i<d;i++){
    	cin>>temp;
    	v4.pb(temp);
    }
    int case1=v1[a-1]-v1[0];
    int case2=v2[b-1]-v2[0];
    int case3=v3[c-1]-v3[0];
    int case4=v4[d-1]-v4[0];
    cout<<max({case1*w,case2*w,case3*h,case4*h});
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
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}