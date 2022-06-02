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
    int a,b;
    string s;
    cin>>a>>b>>s;
    int n=a+b;
    for(int i=0;i<n/2;i++){
        if(s[i]=='0'||s[n-i-1]=='0'){
            if(s[i]=='1'||s[n-i-1]=='1'){
                cout<<"-1"<<endl;
                return;
            }
            a-=2;
            s[i]='0';
            s[n-i-1]='0';
        }
        else if(s[i]=='1'||s[n-i-1]=='1'){
            if(s[i]=='0'||s[n-i-1]=='0'){
                cout<<"-1"<<endl;
                return;
            }   
            s[i]='1';
            s[n-i-1]='1';
            b-=2;
        }
    }

    if(a<0||b<0){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=0;i<n/2;i++){
        if(s[i]=='?'){
            if(a>=2){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            else if(b>=2){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
            else{
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    if(n%2){
    if(s[n/2]=='?'){
        if(a>0){
            s[n/2]='0';
            a--;
        }
        else if(b>0){
            s[n/2]='1';
            b--;
        }
        else{
            cout<<"-1"<<endl;
            return;
        }
    }
    else{
        if(s[(n/2)]=='1'){
            b--;
        }
        else if(s[n/2]=='0')
            a--;
    }
    }
    // cout<<s<<endl;
    // cout<<a<<" "<<b<<endl;
    if(a==0&&b==0){
        cout<<s<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
        // return;
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