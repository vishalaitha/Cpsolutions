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
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    vi suffix(n),prefix(n);
    prefix[0]=v[0];
    suffix[n-1]=v[n-1];
    for(int i=1;i<n;i++){
    	prefix[i]=prefix[i-1]+v[i];
    }
    for(int i=n-2;i>=0;i--){
    	suffix[i]=suffix[i+1]+v[i];
    }
    int i=0,j=n-1;
    int ans=0;
    // for(auto it:prefix)
    // 	cout<<it<<" ";
    // cout<<endl;
    // for(auto it:suffix)
    // 	cout<<it<<" ";
    // cout<<endl;
    int maxi=0;
    int ctr=100;
    while(i<j){
    	// cout<<i<<" "<<j<<endl;
    	if(prefix[i]>suffix[j]){
    		j--;
    	}
    	else if(suffix[j]>prefix[i]){
    		i++;
    	}
    	else if(prefix[i]==suffix[j]&&i<n-1&&j>0){
            ans=i+1+(n-j);
    		maxi=max(maxi,ans);
    		// break;
            i++;
            j--;
    	}
    }
    cout<<maxi;
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