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
    string original,current;
    cin>>original>>current;
    vector<pair<char,int>>v1;
    vector<pair<char,int>>v2;
    v1.pb({original[0],1});
    int j=0;
    for(int i=1;i<original.length();i++){
        if(original[i-1]!=original[i]){
            v1.pb({original[i],1});
            j++;
        }
        else{
            v1[j].second++;
        }
    }
    int k=0;
    v2.pb({current[0],1});
    for(int i=1;i<current.length();i++){
        if(current[i-1]!=current[i]){
            v2.pb({current[i],1});
            k++;
        }
        else{
            v2[k].second++;
        }
    }
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i].first<<" "<<v1[i].second<<endl;
    // }
    // cout<<"--"<<endl;
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i].first<<" "<<v2[i].second<<endl;
    // }
    // cout<<j<<" "<<k<<endl;
    if(j!=k){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0,j=0;i<v1.size()&&j<v2.size();i++,j++){
        if(v1[i].second>v2[i].second||v1[i].first!=v2[i].first){
            // cout<<v1[i].second<<" "<<v2[i].second<<" "<<v1[i].first<<" "<<v2[i].first<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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