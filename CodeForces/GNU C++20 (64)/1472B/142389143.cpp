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
    int n;
    cin>>n;
    vi v;
    int countofones=0;
    int countoftwos=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
        if(temp==1)
            countofones++;
        else
            countoftwos++;
    }
    if(countofones==0){
        int x=(countoftwos*2)/2;
        if(countoftwos%4==0)
        cout<<"YES"<<endl;
        else if(x%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else if(countoftwos==0){
        countofones%2==0?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    else{
        countofones%2==0?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
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