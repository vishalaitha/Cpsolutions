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
    int n,m;
    cin>>n>>m;
    map<string,string> to_know_chef_country;
    map<string,int> to_know_chefs_rating;
    map<string,int> to_know_rating_of_country;
    for(int i=0;i<n;i++){
        string chef,country;
        cin>>chef>>country;
        to_know_chef_country[chef]=country;
        // to_know_chefs_rating[chef]=0;
    }
    for(int i=0;i<m;i++){
        string chef;
        cin>>chef;
        to_know_chefs_rating[chef]++;
    }
    int maxiforchef=INT_MIN,maxiforcountry=INT_MIN;
    for(auto it:to_know_chefs_rating){
        // cout<<it.first<<" "<<it.second<<endl; //////
        maxiforchef=max(maxiforchef,it.second);
    }
    // cout<<endl;
    for(auto it:to_know_chefs_rating){
        to_know_rating_of_country[to_know_chef_country[it.first]]+=it.second;
    }
    for(auto it:to_know_rating_of_country){
        maxiforcountry=max(maxiforcountry,it.second);
        // cout<<it.first<<" "<<it.second<<endl; 
    }
    for(auto it:to_know_rating_of_country){
        if(maxiforcountry==it.second){
            cout<<it.first<<endl;
            break;
        }
    }
    for(auto it:to_know_chefs_rating){
        if(maxiforchef==it.second){
            cout<<it.first<<endl;
            break;
        }
    }
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
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}