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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int indexl=-1;
    int indexr=-1;
    bool possible=0;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            indexr=i;
            indexl=i+1;
            possible=1;
            break;
        }
    }
    if(possible){
        cout<<"YES"<<endl;
        cout<<min(indexl,indexr)+1<<" "<<max(indexl,indexr)+1<<endl;
    }
    else
        cout<<"NO"<<endl;
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