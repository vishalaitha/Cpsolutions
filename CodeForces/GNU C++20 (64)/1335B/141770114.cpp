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
#define endl "\n"
#define int long long int
int ans,temp,sum;
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    string to_be;
    for(int i=0;i<b;i++){
        to_be+=('a'+i);
    }
    // cout<<"to_be.length() is "<<to_be.length()<<endl;
    // cout<<"a-to_be.length() is "<<a-to_be.length()<<endl;
    // cout<<"tobe is "<<to_be<<"x"<<endl;
    int x=(a-(to_be.length()));
    while(x--){
        to_be+=('a');
    }
    // cout<<"tobe is "<<to_be<<"x"<<endl;
    string ans;
    int start=0;
    for(int i=0;i<n;i++){
        if(start==to_be.length())
            start=0;
        ans+=to_be[start];
        start++;
    }
    cout<<ans<<endl;
// cout<<endl;
}
int32_t main()
{
    _z;
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}