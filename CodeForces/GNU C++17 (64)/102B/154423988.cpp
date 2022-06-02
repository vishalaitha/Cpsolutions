// /*---------------------------------------------------------------------------------------------------------------------------*/
// //Author:I_Am_A_Noob
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #include<bits/stdc++.h>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define ll long long
// #define MOD 1000000007
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// //#define for(z,x,y) for(int i=z;i<x;i+=y)
// #define pb push_back
// #define eb emplace_back
// #define ppb pop_back
// #define endl "\n"
// #define int long long int
// #define all(x) (x).begin(), (x).end()
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define vi vector<int>
// #define vpii vector<pair<int, int>>
// #define vs vector<string>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define si set<int>
// #define mpii map<int, int>
// ---------------------------------------------------------------------------------------------------------------------------
// void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// /*---------------------------------------------------------------------------------------------------------------------------*/
// int ans,temp,sum;
// using namespace std;

// int sumofdigits(int n){
// 	int ans=0;
// 	while(n){
// 		ans=n%10;
// 		n/=10;
// 	}
// 	return ans;
// }

// void solve(){
//     string s;cin>>s;
//     int ans=0;
//     for(int i=0;i<s.length();i++){
//     	ans+=s[i]-'0';
//     }
//     int ans2=sumofdigits(ans);
//     cout<<ans<<endl;
//     cout<<ans2<<endl;
//     if(ans==0){
//     	cout<<"0"<<endl;
//     }
//     else if(ans<=9){
//     	cout<<"1"<<endl;
//     }
//     else if(ans2<9){
//     	cout<<2<<endl;
//     }
//     else{
//     	cout<<3<<endl;
//     }
//     // cout<<steps<<endl;
// }

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
// freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
// #endif
//     fastio();
//     int t=1;
//     // cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
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
int sumofdigits(int n){
	int ans=0;
	while(n){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
void solve(){
    //if ans2==1 print 3
    string s; cin>>s;
    if(s.length()==1){
        cout<<"0"<<endl;
        return;
    }
    // cout<<s.length()<<endl;
    int ans1=0;
    int ans2=0;
    for(int i=0;i<s.length();i++){
    	ans1+=s[i]-'0';
    }
    // cout<<ans1<<endl;
    if(ans1==0){
    	cout<<"0"<<endl;
    	return;
    }
    int steps=1;
    int ctr=100;
    while(1&&ctr){
    	// cout<<"Entered "<<ans1<<endl;
    	if(ans1<=9){
    		break;
    	}
    	steps++;
    	ans1=sumofdigits(ans1);
        ctr--;
    }
    cout<<steps<<endl;
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