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
    vi v;si s;
    for(int i=0;i<n;i++) {
    	cin>>temp;
    	// v.pb(temp);
    	s.insert(temp);
    }
    // cout<<endl;
    // cout<<"45"<<endl;
    if(s.size()==1||s.size()==2){
    	if(s.size()==1){
    		cout<<"0"<<endl;
    	}
    	else{
    		auto it=s.begin();
    		int ans1=*it;
    		it++;
    		int ans2=*it;
    		if((ans1+ans2)%2==1){
    			cout<<abs(ans2-ans1)<<endl;    			
    		}
    		else{
    			cout<<abs(ans2-ans1)/2<<endl;
    		}
    	}
    		return;
    }
    else if(s.size()>3){
    	cout<<"-1"<<endl;
    	return;
    }
    else{
    	auto it1=s.begin();
    	int ans1=*it1;
    	it1++;
    	int ans2=*it1;
    	it1++;
    	int ans3=*it1;
    	// cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    	if(abs(ans2-ans1)==abs(ans3-ans2)){
    	// cout<<"entered"<<endl;
    		cout<<abs(ans2-ans1)<<endl;
    		return;
    	}
    	else{
    		cout<<"-1"<<endl;
    		return;
    	}
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
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}