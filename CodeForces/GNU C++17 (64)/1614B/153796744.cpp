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
    vpii v(n),new_v(n); for(int i=0;i<n;i++){cin>>v[i].first,v[i].second=i+1;}
    new_v=v;
    sort(v.rbegin(),v.rend());
    int forward=1; int backward=-1; bool turn=1;
    vpii ans; // pair <old index,new index>
    // ans.pb({v[0].second,0});
    for(int i=0;i<n;i++){
        if(turn){
            ans.pb({v[i].second,forward});
            forward++;
            turn=0;
        }
        else{
            ans.pb({v[i].second,backward});            
            backward--;
            turn=1;
        }
    }
    int reqindex=ans[0].second;
    int distance=0;
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        distance+=abs(ans[i].second)*new_v[ans[i].first-1].first;
        // cout<<"-->"<<ans[i].first<<" ";
        // cout<<"-->"<<ans[i].second<<endl;
    }
    cout<<2*distance<<endl;
    for(int i=0;i<n;i++){
        if(reqindex-1==i){
            cout<<"0 ";
        }
        cout<<ans[i].second<<" ";
    }
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