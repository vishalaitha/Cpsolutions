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
    vi v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.pb(x);
    }
    int prev=-1;
    int l=0,r=n-1;
    vector<char>ans;
    while(l<=r){

        vector<pair<int,char>>temp;
        if(v[l]>prev)
            temp.pb({v[l],'L'});
        if(v[r]>prev)
            temp.pb({v[r],'R'});
        sort(temp.begin(),temp.end());
        if(!temp.size())
            break;
        ans.push_back(temp[0].second);
        if(temp[0].second=='L') l++;
        else r--;
        prev=temp[0].first;

    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
        cout<<it;

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