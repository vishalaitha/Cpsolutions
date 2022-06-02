/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
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
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define si set<int>
#define mii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.length();
    bool isbool=0;
    for(int i=n-1;i>0;i--){
        int a=s[i-1]-48;
        int b=s[i]-48;
        if(a+b>=10){
            s[i-1]=(a+b)/10+'0';
            s[i]=(a+b)%10+'0';
            isbool=1;
            break;  
        }
    }
    if(isbool){
        cout<<s<<endl;
    }
    else{
        int a=(s[0]-48);
        int b=(s[1]-48);
        s[1]=char((a+b)%10+48);
        for(int i=1;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
// cout<<s<<endl;
    
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