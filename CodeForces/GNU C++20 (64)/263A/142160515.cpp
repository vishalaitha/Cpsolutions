//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
#define ll long long
#define MOD 1000000007
#define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
//#define for(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long int
int ans,temp,sum;
using namespace std;
void solve(){
    vector<vector<int>>v(6,vector<int>(6,0));
    pair<int,int>coordinate;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            v[i][j]=temp;
            if(temp==1){
                coordinate.first=i;
                coordinate.second=j;
            }
            // cout<<v[i][j];
        }
    }
    // cout<<coordinate.first<<" "<<coordinate.second<<endl;
    int ans=0;
    if(coordinate.first==3&&coordinate.second==3){
            cout<<"0"<<endl;
            return;
        }
    if(coordinate.first==3){
            ans=abs(3-coordinate.second);
            cout<<ans<<endl;
            return;
        }
    else if(coordinate.second==3){
            ans=abs(3-coordinate.first);
            cout<<ans<<endl;
            return;
        }
        int dir=1,dic=1;
    while(1){
        if(coordinate.first==3&&coordinate.second==3){
            break;
        }
        if(coordinate.first>3){
            dir=-1;
        }
        else if(coordinate.second>3){
            dic=-1;
        }
        if(coordinate.first!=3){
            coordinate.first+=dir;
            ans++;
        }
        else if(coordinate.second!=3){
            coordinate.second+=dic;
            ans++;
        }
        // cout<<coordinate.first<<" "<<coordinate.second<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
// cout<<endl;
}
int32_t main()
{
    _z;
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}