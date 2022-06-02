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

// void solve(){
//     int n,m;
//     set<pair<int,int>>s;
//     cin>>n>>m;
//     vi v1,v2;
//     v1.pb(0);
//     for(int i=0;i<n;i++){
//     	cin>>temp;
//     	v1.pb(temp+v1[i-1]);	
//     	s.insert(v1[i],i+1);
//     }
//     for(int i=0;i<m;i++){
//     	cin>>temp;
//     	v2.pb(temp);
//     }
//     for(int i=0;i<m;i++){
//     	if(s.count(v2[i]))
//     		cout<<1<<" "<<*s.find(v2[i]).second;
//     	else{
//     		auto it=upper_bound(s.begin(),s.end(),v2[i]);
// 			cout<<it.second<<""<<*it.first-v2[i];    		
//     	}
//     }

// cout<<endl;
// }
void solve(){
    int n,m;
    cin>>n>>m;
    vpii v1;v1.pb({0,0});
    vi v2;
    for(int i=1;i<=n;i++){
        cin>>temp;
        v1.pb({temp+v1[i-1].first,i});
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        v2.pb(temp);
    }
    for(int i=0,j=0;i<m;i++){
        while(v2[i]>v1[j].first){
            j++;
        }
        cout<<v1[j].second<<" ";
        cout<<v2[i]-v1[j-1].first<<endl;
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