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
    int r,c,x1,y1,x2,y2;
    cin>>r>>c>>x1>>y1>>x2>>y2;
    int dr=1;
    int dc=1;
    int ans=0;
    while(1){
        if(x1==x2||y1==y2){
            break;
        }
        if(x1+dr>r)
            dr=-1;
        else if(x1+dr<1)
            dr=1;
        if(y1+dc>c)
            dc=-1;
        else if(y1+dc<1)
            dc=1;
        x1+=dr;
        y1+=dc;
        ans++;
    }
    cout<<ans;
cout<<endl;
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