/*I_Am_A_Noob*/

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
//#define for(z,x,y) for(int i=z;i<x;i+=y)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define endl "\n"
#define int long long int

int ans,temp,sum;
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int total=x+y;
    if(total%2!=0)
        cout<<"-1 -1"<<endl;
    else{
        if(x%2!=0&&y%2!=0&&x>y)
            cout<<(x+y)/2<<" 0"<<endl;
        else if(x%2!=0&&y%2!=0&&y>0)
            cout<<"0 "<<(x+y)/2<<endl;
        else    cout<<x/2<<" "<<y/2<<endl;
    }
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