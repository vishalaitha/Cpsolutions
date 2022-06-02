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
    vi v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.pb(temp);
    }
    int ans=v[n-1];
    int j=n-2;
    int mini=v[n-1]-1;
    // cout<<endl;
    for(int i=n-2;i>=0;i--,j--){
        // cout<<ans<<" is ans till here min is "<<mini<<endl;
        if(mini==0)
            break;
        else if(v[j]>=mini&&v[j]>0){
            ans+=mini;
            mini--;
        }
        else if(v[j]<mini&&v[j]>0){
        ans+=v[j];
        mini=v[j]-1;
        }

    }
    // cout<<endl;
    cout<<max(0LL,ans);
cout<<endl;
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