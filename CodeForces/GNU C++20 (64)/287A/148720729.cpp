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
    char array[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            // char temp;
            // cin>>temp;
            cin>>array[i][j];
        }
    }
    bool f=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // if(array[i][j]==array[i][j+1]&&(array[i+1][j]!=array[i+1][j+1])&&f==0)
            //     f=1;
            // else if(array[i][j]==array[i][j+1]&&(array[i][j]==array[i+1][j]&&array[i][j+1]==array[i+1][j+1])&&f==0)
            //     f=1;
            // else if(array[i][j]!=array[i][j+1]&&(array[i][j]!=array[i+1][j]&&array[i][j+1]==array[i+1][j+1])&&f==0)
            //     f=1;
            int a=array[i][j];
            int b=array[i][j+1];
            int c=array[i+1][j];
            int d=array[i+1][j+1];
            //ab
            //cd
            if(a==b&&a==c){
                cout<<"YES"<<endl;
                return;
            }
            else if(a==c&&a==d){
                cout<<"YES"<<endl;
                return;
            }
            else if(a!=b&&a!=c&&a!=d){
                cout<<"YES"<<endl;
                return;
            }
            else if(a==b&&a==c&&a==d){
                cout<<"YES"<<endl;
                return;
            }
            else
                continue;
        }

    }
    if(!f)
        cout<<"NO"<<endl;
    // else
    //     cout<<"NO"<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<array[i][j];
    //     }
    //     cout<<endl;
    // }
// cout<<endl;
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