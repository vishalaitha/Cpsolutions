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
    int n,k;
    cin>>n>>k;
    vi v;
    int sum=0;
    for(int i=0;i<n;i++){
    	cin>>temp;
    	v.pb(temp);
    	sum+=temp;
    }
    int minival=-1;
    int i=0;
    int tempsum1=sum;
    while(i!=v.size()){
    	if(tempsum1%k!=0){
    		break;
    	}
    	tempsum1-=v[i];
    	i++;
    }
    int j=n-1;
    int tempsum2=sum;
    while(j){
    	if(tempsum2%k!=0){
    		break;
    	}
    	tempsum2-=v[j];
    	j--;
    }
    if(j==0&&i==n){
    	cout<<"-1"<<endl;
    }
    else
    cout<<max(n-i,j+1)<<endl;
// cout<<i<<" "<<j<<endl;
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