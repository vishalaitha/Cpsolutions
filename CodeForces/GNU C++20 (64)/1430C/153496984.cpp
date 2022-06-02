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
    for(int i=1;i<=n;i++){
        v.pb(i);
    }
    int ans;
    int ptr=n;
    int j=n-1;
    vpii vans;
    while(1){
        // cout<<endl;
        if(j<1){
            break;
        }
        else if((v[j]+v[j-1])%2==0){
        // cout<<v[j]<<" "<<v[j-1]<<endl;
        vans.pb({v[j],v[j-1]});
        v[j-1]=(v[j]+v[j-1]+1)/2;
            // j--;

        }
        else if(j==1){
            vans.pb({v[0],v[1]});
            v[0]=(v[0]+v[1]+1)/2;

        }
        else if((v[j]+v[j-2])%2==0){
            temp=v[j];
            // cout<<v[j-2]<<" "<<temp<<endl;
            vans.pb({v[j-2],temp});
            v[j-2]=(v[j]+v[j-2]+1)/2;
        }
        // for(int i=0;i<=j;i++)
            // cout<<v[i]<<" ";
        j--;
        // cout<<endl;
    }
    cout<<v[0]<<endl;
    for(auto it:vans){
        cout<<it.first<<" "<<it.second<<endl;
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
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}