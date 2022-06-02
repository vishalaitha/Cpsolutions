/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
/*---------------------------------------------------------------------------------------------------------------------------*/
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include <array>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<math.h>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
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
    int a,b;
    cin>>a>>b;
    int inita=a,initb=b;
    int initsum=a+b;
    int initsumwithoutzero=0;
    while(initsum){
        if(initsum%10!=0)
            initsumwithoutzero=initsumwithoutzero*10+initsum%10;
        initsum/=10;
    }
    int crt=0;
    while(initsumwithoutzero){
        crt=crt*10+initsumwithoutzero%10;
        initsumwithoutzero/=10;
    }
    int dma=0,dmb=0;
    while(a){
        if(a%10!=0)
            dma=dma*10+a%10;
        a=a/10;
    }
    while(b){
        if(b%10!=0)
            dmb=dmb*10+b%10;
        b=b/10;
    }
    int dmac=0,dmbc=0;
    while(dma){
        dmac=dmac*10+dma%10;
        dma/=10;
    }
    while(dmb){
        dmbc=dmbc*10+dmb%10;
        dmb/=10;
    }
    int smnow=dmac+dmbc;
    // cout<<crt<<endl;
    if(crt==smnow){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

int32_t main()
{
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}