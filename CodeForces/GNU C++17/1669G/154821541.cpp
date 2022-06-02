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
    int n,m;
    cin>>n>>m;
    char v[55][55];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(v[i][j]=='*'&&v[i+1][j]=='.'){
                int curri=i;
                while(1){
                if((curri)<n-1&&v[curri+1][j]=='.')
                    curri++;
                else
                    break;
                }
                v[curri][j]='*';
                v[i][j]='.';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<"";
        }
        cout<<endl;
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