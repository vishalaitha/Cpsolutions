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
    string s;
    cin >> s;
    string forteam1 = s;
    string forteam2 = s;
    for (int i = 0; i < 10; i++){
        if (s[i] == '?'){
            if (i%2 == 0){
                forteam1[i] = '1';
                forteam2[i] = '0';
            }
            else {
                forteam1[i] = '0';
                forteam2[i] = '1';
            }
        }
    }
    int s1 = 0, s2 = 0;
    int ans = 10;
    for (int i = 1; i <= 10; i++){
        if (i%2 == 0){
            if (forteam1[i - 1] == '1'){
                s2++;
            }
        }
        else{
            if (forteam1[i - 1] == '1'){
                s1++;
            }
        }
        int rem = 10 - i + 1;
        rem/=2;
        if (s2 + rem < s1){
            ans = min(i, ans);
        }
    }
    s1 = 0, s2 = 0;
    for (int i = 1; i <= 10; i++){
        if (i%2 == 0){
            if (forteam2[i - 1] == '1'){
                s2++;
            }
        }
        else{
            if (forteam2[i - 1] == '1'){
                s1++;
            }
        }
        int rem = 10 - i;
        rem/=2;
        if (s1 + rem < s2){
            ans = min(i, ans);
        }
    }
    cout << ans << endl;
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